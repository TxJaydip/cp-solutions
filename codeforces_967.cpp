#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define vi vector<int>
void iv(vi &v, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }
}
void ov(vi &v, int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print(set<int> &s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

void print(unordered_set<int> &s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

void print(set<set<int>> &s)
{
    for (auto i : s)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << ";";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<set<int>> edges;
        int cnt = 1;
        int input;
        int flag = 0;
        for (int node = 1; node <= n; node++)
        {
            if (edges.size() == n - 1)
            {
                break;
            }
            // cout << "Edges: ";
            // print(edges);
            unordered_set<int> doneForCurrent = {node};
            for (int forCurrent = 1; forCurrent <= n; forCurrent++)
            {
                if (edges.size() == n - 1)
                {
                    break;
                }
                // cout << "DoneForCurrent: ";
                // print(doneForCurrent);
                if (doneForCurrent.find(forCurrent) == doneForCurrent.end())
                {
                    cnt = forCurrent;
                    while (true)
                    {
                        if (edges.find({node, cnt}) != edges.end())
                        {
                            break;
                        }
                        cout << "? " << node << " " << cnt << endl;
                        cin >> input;
                        cout.flush();

                        if (input == node)
                        {
                            flag = 1;
                            edges.insert({node, cnt});
                            doneForCurrent.insert(cnt);
                            break;
                        }
                        if (doneForCurrent.find(input) != doneForCurrent.end())
                        {
                            doneForCurrent.insert(cnt);
                            break;
                        }
                        doneForCurrent.insert(cnt);
                        cnt = input;
                    }
                }
                if (flag)
                {
                    flag = 0;
                    break;
                }
            }
        }

        cout << "! ";
        for (auto i : edges)
        {
            for (auto ele : i)
            {
                cout << ele << " ";
            }
        }
        cout << endl;

        // int n;
        // cin >> n;
        // int limit = 15 * n;
        // set<int> done;
        // set<int> tobe_done = {1};
        // set<set<int>> prs;
        // int cnt = 0;
        // int flag = 0;
        // set<int> dont_find = {1};
        // while (true)
        // {
        //     set<int> tobe_done_copy = tobe_done;
        //     set<int> temp_tobe_done;
        //     for (auto frm : tobe_done_copy)
        //     {
        //         // cout << "current frm: " << frm << endl;
        //         for (int to = 1; to <= n; to++)
        //         {
        //             if (done.find(to) == done.end() && to != frm && dont_find.find(to) == dont_find.end())
        //             {
        //                 cout << "? " << frm << " " << to << endl;
        //                 cnt++;
        //                 int inp;
        //                 cin >> inp;
        //                 cout.flush();
        //                 if (inp == frm)
        //                 {
        //                     prs.insert({frm, to});
        //                     if (prs.size() == n - 1)
        //                     {
        //                         flag = 1;
        //                     }
        //                     temp_tobe_done.insert(to);
        //                     dont_find.insert(to);
        //                 }
        //             }
        //         }
        //         if (flag)
        //         {
        //             break;
        //         }
        //         done.insert(frm);
        //         tobe_done = temp_tobe_done;
        //         if (done.size() == n)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if (flag)
        //     {
        //         break;
        //     }
        // }
        // cout << "! ";
        // for (auto i : prs)
        // {
        //     for (auto ele : i)
        //     {
        //         cout << ele << " " << endl;
        //     }
        // }
        // cout << endl;
        // cout << "Queries: " << cnt << endl;
        // int n;
        // cin >> n;

        // if (n % 2 == 0)
        // {
        //     cout << -1 << endl;
        // }
        // else
        // {
        //     vector<int> answer(n + 1);
        //     if (n == 1)
        //     {
        //         cout << 1 << endl;
        //     }
        //     else if (n == 3)
        //     {
        //         cout << "1 3 2" << endl;
        //     }
        //     else
        //     {
        //         answer[1] = 1;
        //         answer[n] = 2;
        //         answer[(n / 2) + 1] = n;
        //         int cnt1 = 4;
        //         for (int i = 2; i <= (n / 2); i++)
        //         {
        //             answer[i] = cnt1;
        //             cnt1 += 2;
        //         }
        //         cnt1 = n - 2;
        //         for (int i = 2 + (n / 2); i < n; i++)
        //         {
        //             answer[i] = cnt1;
        //             cnt1 -= 2;
        //         }
        //         ov(answer, n + 1);
        //     }
        // }
        // vi v;
        // iv(v, n);
        // map<int, int> mp;
        // for (auto i : v)
        // {
        //     mp[i]++;
        // }
        // int maxi = 0;
        // for (auto i : mp)
        // {
        //     if (i.second > maxi)
        //     {
        //         maxi = i.second;
        //     }
        // }
        // cout << n - maxi << endl;
    }
    return 0;
}

/*
//
//
//
//

//
//
//
//
//
//
//
//
//
//
//
//

/*
%%%%%%%%%%%%%%%%%%%%%@%@%%%%%%%%%%%%%@%%@@@%%%%%%%%%%%%@%@@%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@%@@@%%@@
%%%%%%%%%%%%%%%%%%%%%@@@%%%%%%%%%%%%%%@@%@%@@%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%@%%@@@@@@@@@@@@%@%@@@%%@@
%%%%%%%%%%%%%%%%%%%%%%@%@%%%%%%%%%%%%%%@%@%%%%@%%%%%%%%%%@%%@%%%%%%%%%%%%#%%%%@@@@@@@@@@@@%@%@@@@%%@
%%%%%%%%%%%%%%%%%%%%%%@@@@%%%%%%%%%%%%%%@@%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%#%%%%@@@@@@@@@@@@%@%%@@@%%@
%%%%%%%%%%%%%%%%%%%%%%%@@@%%%%%%%%%%%%%%%@%@%%%@%%%%%%%%%%%%%%%%%%%%%%%%%#%%%%@@@@@%@@@@@@%@%%@@@%%@
%%%%%%%%%%%%%%%%%%%%%%%%@%@%%%%%%%%%%%%%%%@@%%%%@%%%%%%%%%%%%%%@%%%%%%%%#%%%%@@@@@%%@@@@@%%@@%@@@%%%
%%%%%%%%%%%%%%%%%%%%%%%%%@%@%%%%%%%%%%%%%%@@%%%%@%%%%%%%%%%%%%%%@%%%%%%%#%%%%@@@@%%%@%@@@%%@@%%@@%%%
%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@%%%%%%%%%%%%@%%%%%@@%%%%%%%%%%%%%%%%@%%%%%#%##%@@@%%%%@%%@@%%@@%%@@@%%
%%%%%%%%%%%%%%%%%%%%%%%%%%@@@%%%%%%%%%%%%%%@@%%%%@%%%%%%%%%%@%%%%%%@%#%##+=%%@@@%%%@@%%@@%%@@%%@@@%%
%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@%%%%%%%%%%%%%%@%%%%@@@@%%%%%@%%%%%%%%%#%%+===%%@@@%%%@%%%@@%%%@%%%@@%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@%%%%%%%%%%%%@%@%%%%%%%%%%%%%@%%%%%%#+-===+%%@@@%%%@%%%@@%%%@@#%@@%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@%%@%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%@%%**+++##%%@@@%%@@%%%@@%%%@@%%@@@%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@%@@%%%%%%%%%%@%%%%%%@%%%%%%%%%%%%#**#*%%*=+%%@@%%%@@%%%@@@%@@@%%%@@%
%%@%%%%%%%%%%%%%%%%%%%%%%%%%@%@@@%%@%%%%%%%%%%@%%%%%@%%%%%%%%%%#**%@%%=---*#%@@%%%@@%%%@@@%@@@%%%@@%
%@%%%%%%%%%%%%%%%%%%%%%%%%%%@%@@@%%@@@@%%%%%%%%@%%%%%@%%%%%@%#%@@%#**-----*%%@@%%%@%%%%%@@%%@@%%%@@@
%@%%%%%%%%%%%%%%%%%%%%%%%%%%%@@%%%@%%@%%%%%%%%%@%%%%%%%%%%@@@@@%*+++*--===*##@@%%@@%%%%%@@%%%@%%%%@@
%@%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@%%@%%@%%%%%%%%%%%%%%%@@@@@@@@@#***%@%+----*##@@%%@@%%%%%@@%%%@%%%%@@
%@%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@%%%%%%%%%%%%%%%@@%%@@@@@@%%#+#%@@%#++-----*#*@@%%@@%%%%%@@%%%@@%%%@@
%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%@@@@@@@@@@%*+#@%@*+++*+-----*#+@@%%@@%%%%@@@%%%@@%%%%@
%@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%@@@@%%%@@@@@@@@%@%*#%%%*+*%*++++-----*#+@@%%@@%%%#@@@#%%@@@%%%@
%@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%@@%%@@@@@@@@@@%%%%%@%#**+*++%*+*+-----*#+@@%%@@%%%%@@@%*%%%@%%%@
%%@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@%%%%%%##*#####%*++-----*#+@@%%@@%%%%%@%@+%%@@%%%@
%%%@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@%@%@@@@@@%@@@%%%%%@%%%%%#*+*%*@@%%%@%%%%%%%@=##@@%%%@
@%%%@@@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@%%=*@%%****+**+=----@+++*+--+%*%@%%%@%%%#%@%#=##%@@%%@
%%%%%@@@%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@%%%%%%@%%@@@@@@@@@@@%@@%%@@@@%@#%#%#%@%%%@%%%#%@%=-*#*@@%%%
%@%%%@@@@@%%%%%%%%%%%%%%@@@@@@@%%%@@@@@@@@@@@@@@@@@@@@@@@@*===------==-==+@@##@@%%@%%##@%%=-+%*@@%%%
%@@%%%%%@@@@@@@@%%@@@@@@@@@@%%%%%%@@@%#+====*@@@@@@@@@%:*@=---:::-----==+@%#%*@@%%@@%##@%#=-=%+@@%%%
%%@%%%@@%%@@@@@@@@@@@@@@%%%%%%%%#@@+===--=--+@%#@@@@@%#+@+.......:::--=+@%#%%*@@%%@@%#*@%*===#+%@%%%
%%%%%%@@@@@@@@@@@@@@@@%%%%%%%%%@%+===---:::::%#-=*@@#=*%*.........::-=#@%%**#*@@%%%@%##@%+=-=#*%@%%%
%%%%%%%%%@@@@@%%@%%%%%%%%%%%%%@*===---::::...:%::#+*%%@+......:::--=*@%%%+-*#*@@%%%%@#*@%=---#*#@%%@
%%%%%%%%%%%@@@%%%%%%%@%%%%%%%#======---:::.:...-##**#=....::::---=#@%%%%+--+%#@@%%%#@#*@@=---#*#@%%@
%%%%%%%%@@@@%%%%%%%@%%%%%%%%%**###*+===-------::::::::::----===#@%%%%%%%==++%#%@%%%#@##@@----##*@%%@
%%%%%@@@%%%%%%%%%%%%%%%%%%%%%%%%%#%%%%%%%@@%#++++=====++*#%@@@%%%%%%%%%#+*+*#@%@@%%#@#*@%----##+@@%@
%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#**#%%%%%%%%%@%%%%%%%%%%%%#***=-=%%%%+*+*%%*@@%%*##*@#----*#+@%%#
%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%*+=------=%@@%+++**=------#%%#+*++----+%%%*++*%#*@@%%#+%*@#----##+@%%=
%%%%%%%%%%%%%%%%%%%%%%%%%@%*-------------*%%*+++*=-=----#%%%++*+----+%+%%*++###%@@%#=%*@#----##+@%%-
%%%%%%%%%%%%%%%%%%%%%%%%%=------------=--#%%%+++*=----=#%%%%#+++=---=---#%+*###*@@%#***@#----##+@%*-
%%%%%%%%%%%%%%%%%%%%*-#+----------------*%%%%*+++--------*@%%#++*+------=@%++%#*@@%%+*+@#----#**@@=*
%%%%%%%%%%%%%%%%%%*--------------------===%@%%+++**=-------*%%#++--------+%#**@##@%%+*+@@---=%+#@%=#
%%%%%%%%%%%%%%%%*---------------------------+%%*+++=---------#%**---------+%#+%#*%@%#+*@@---=%=#@#+*
%%%%%%%%%%%%%%*-------------------------------=@#++*----------*%**---------+%#%#%#@@@=#%@===+%=%@+%=
%%%%%%%%%%%@=-------------------::-------------*%#++*----------#%++---------#@*###@@#*##@=-=##=%%*#-
%%%%%%%%%*=-------------::::::::::::------------@%%++*----------%%**---------*%*#%#@@#+#@===%*=@%#+-
%%%%%%#+-------------::::::::::::::::-----------=#%#++*---------+%%+*---------*%*##%@@*#@==+#++@##--
%%%%#=-------------::::::::::::::::::-------------=%%++=---------=%%*----------*%*##@@%##=-+#+#@#+--
%%%=------------:::::::::::::::::::::::-------------*#+++----------%#+=---------*####@@%+==#%=@%%=--
#==-------------:::::::::::::::::::::::--------------=%+*-----------*%*----------**%%%@@*=-##*@%#-=-
--==----------::::::::::::::::::::::::::::------------=%+*-----------=%+---------=%#%#%@*==%+%%%=-*%
---------------:::::::::::::::::::::::::::--------------%++:-----------%=:--------=@@#+@@=*#+@%*#%%%
-------------::::::::::::::::::::::::::::::-------------=%*-------------*----------+%%=%@=%#%@%%%%%%
---------:::::::::::::::::::::::::::::::::::::-----------=%*--------------=:-------=@%=#%=%#@@%%%%@%
---------::::::::::::::::::::::::::::::::::::::-----------+@+:---------------------=#@+#+*%%@@%%%%%%
---------:::::::::::::::::::::::::::::::::::::::-----------+%+---------------------=%%+*+#%@@%%%%%%%
---------:::::::::::::::::::::::::::::::::::::::::---------:=@---------------------=#%%%%%%@@%%%%%%%
---------:::::::::::::::::::::::::::::::::::::::::::-------:--+----------------=+###%%%%%%@@%%%%%%@@
---------:::::::::::::::::::::::::::::::::::::::::::::---------------------=#%###%%#%%%%%%@@%%%%%%@%
----------::::::::::::::::::::::::::::::::::::::::::::------------------*#%###%##%%%%%%%%%@@%%%%%%@%
----------:-::::::::::::::::::::::::::----::::::::::------------------*######%%%%%%%%%%%%%%%%%%%%%@@
----------------::::::::::::::::::::::----:::::----------------------=*###%%%%%%%%%%%%%%%%%%%%%%%%@%
--------------------::::::::::::::::::--------------------------------#%%%%%%%%%%%%%%%%%%%%%%%%%%%@%
-------------------::::::::::::::::::::::::-------------------==-----=####%%%%%%%%%%%%%%%%%%%%%%%@@%
=======++#+--------::::::::::::::::::---------------------:--+-------=%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@
%%%%%%%%%@=-----------::::------------:----------------------:*------+%#%#%%%%%%%%%%%%%%%%%%%%%@@@@@
%%%%%%%@@*------------------------------------:------:-------=+--+---*%%%#%%%%%%%%%%%%%%%%%%%@%@@@@%
%%%%%@@@*------------------------------------------------:-%=-=-=----#%%%%%%%%%%%%%%%%%%%%%@%%%@@@@@
%%@%%%%+-----------:---::---:-----:------------:--------*@=-----==--=%%%%%%%%%%%%%%%%%@%%%%@%%%@@@@@
@%%@@%=---------------:-------------:----------------+#@*-------=---=%%#%%%%%%%%%%%%%%%%%%%%%%%@@@@@
%@@@*--=------=--------:------:-----------------:-=#+-*---------==--+%%#%%%%%%%%%%%%@%%%%%%%%%%@@@@@
%@%=----=-------------:--::::----------:-------*#:..*=----------=--=*%%%%%%%%%%%%%%@%%@@%%%%%%%@@@@%
@*---------------::::----------:::---:--:+#+:::...=+------------===-*%%%%%%%%%%%%%@%%%@%%%%%%%%@@@@@
----------------------------------+*+=-:.......:*+-------------=---=#%%%%%%%%%%%%%%@%%%%%%%%%%%@@@@@
=+*%+---------------::----=++++-::...........+@+---------------=---=#%%%%%%%%%%%@@%%%%%%%%%%%%%@@@@%
#*+-----------:----=+*#=::::::...........:-%%=----------------=---==%%%%%%%%%%%@%%%@%%%%%%%%%%%@@@@@
------------=%#+:.::.::.............-#@@@@=-:----------------=---=-+%%%%%%%%%%@%%%@%%%%%%%%%%%%@@@@@
#**+===--:::................:...:*@@@@%+--------------------==-----*%%%%%%%%@%%%%%%%%%%%%%%%%%%@@@@@
:::::.:..................:-=**#@@@%*=----------------------==-----=#%%%%%%%%%@%%%%%%%%%%%%%%%%%@@@@@
::::::...::.......::-=*@@%@@@@#*---------------------------------==%%%%%%%%%@%%%%%%%%%%%%%%%%%%@@@@@
##%%@@@@@@@@@@@@@@%%@@@@@@*-------------------------------==------+%%%%%%@%%@%%%%%%%%%%%%%%%%%@@@@@@
@@@@@@@@@@@%%%%%%%%@@*=-----------------------------------==---=-=+%%%@%%%@@%%%%%%%%%%%%%%%%%%@@@@@@
%%%%%%%%%%%%%%@%*+---------------------------------------------===*%@%%@%%%@%%%%%%%%%%%%%%%%%%@@@@@@
%%%%%%%%%%#*=-------------------:------------------------=----====%%%%%%%@@@%%%%%%%%%%%%%%%%%%@@@@@@
=====--=-------------------------+#----------------------===-===*@%@%%%@@@@%%%%%%%%%%%%%%%%%%%@@@@@@
------------------------------*%%+--------------------=-======+@%%%%@%%@@@@%%%%%%%%%%%%%%%%%%%@@@@@@
-------------------------=##%###-----------------------==-==+%%%%%%%%%%@@@%%%%%%%%%%%%%%%%%%%%@@@@@@
-------------------=+##%%%%%%#+----------------------==-===#@%@%%%%%%%%@@%%%%%%%%%%%%%%%%%%%%@@@@@@@
-------------=+*%%%%%#%%%%%%*----------------------=-====*@%%%%@%%%%%%%@%%%%%%%%%%%%%%%%%%%%%@@@@@@@
======+*#%%%%%%%%%%%%%%%%*=------------------------=-===@%%%%%%%%%%%%%@@%%%%%%%%%%%%%%%%%%%%%@@@@@@@
%%%%%%%%%%%%#%%%%%%%%*=-------------------------======%@%@%%%%%@+#%%%%@%%%%%%%%%%%%%%%%%%%%%%@@@@@@@
%%%%%%%%%%%%%%%%*+=-------------------:--------==+==%%%%%@%%%%#==%%%%@@%%%%%%%%%%%%%%%%%%%%%%@@@@@@@
%%%%%%%%#**+=--------------------------------=====#@%%%%%%%%%*===%%%%@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@
==--------------------------------------==-=====#@@%@@%%%%%%====+%%%@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@
----------------------------------------*==+==*@%@@%@%%%%%*-====+%%@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@
-------------------------------------===+*=+#@%%@%@@%%%%#====-==+%%@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@
-------------------------------------+++=+#@%@%%%%@%%%%+=-===-=-*%@@%%%%%%%%%%%%%%%%%%%%%%%@@@%@@@@@
---:-:-------------::-:----------=-==+=*#@%%%%%%%@%%%#==-====-==%%@@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@
--=---:----=----------------=-====-==*@@%%%%%%%%%@%%*-=-==---==%%@@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@
-----------=-------------=--=-====-#@@%%%@%%%%%%@%#=--=-=---=-*%%@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@
--------------==---=-----==-=+==*%%%%@@%%%%%%%%%@#==-------==+%%@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@
-=--=-------------=-=-=-=-=-=*%@@@%@@%%%%%%%%%%@%===-------=+%%@@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@
-=---:------===-=-=-==-==+#@@@@@@@@%%%%%%%%%%%%@+=---------+%%%@%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@%
-=--=--==-=--==--=====%@@@@@@@@@@%%%%%%%%%%%*%@*-=--------+%%%@%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@%

 */

/*




    @@@%=*@@@@@++%@@@@@@@*=#%@@@@@@%@%@@@@@@%@@@@%@@@@@@@@@%@@%@%%@@@@%@%@@@@*#@@@@@@@@@@@@%*@@@%%::::-+*+%@@%%@@#%@@@#%@%@@@%@@@@@%++%@@@@@%%%%%%%
    @@@%=%@@@@@+#@@@@@@@%==%@@@@@@@+*%@@@@@@@%@%#=%%@@@@@@@@@@%%%@@@@@%%@@@@#+%@@@@@@@@@@@@+#@@@@#:::::=++*@@@#@%#*@@@@#@*@@@#@@@@%%+=#%@@@@%%%%%%%
    @%@@%@@@@@@#@@@@@@@%%=*@@@@@%@#=+%@@@@@@@@%@*=#@@@@@@@@@%%%@@@@@@@@%@@@@++@@@@%%%@@@@@%+#@%@%+...::=+++%@@+%@#+@@@@*@+@@@%%@@@%%*=#%@@@@%%%%%%%
    @@@@@@@@@@@@@@@@@@@@#=%%%@@@@@*=#@@@@@@@@%%%=+%@@@@@%%%%@@*@@@@@@@%%@@@*++@@@%%#@@%@@@*+%@@%%-::::::+++*@@##@*+%@@@@@+*@@@@@@@%@%=+@@@%@@%%%%%%
    @@@@@@@@@@@@@@@@@@@%%%@@@@@@@@*=%@@@@@@@@@@#=*@@@@@@+%@@@%=%@@@@@%+@@@#++*@@%%##@@@@@%++@@@%%:::::::=+++@@@%@+=*@@@@%++@@@@@@@@@%**%@@%@@%%%%%%
    @@@@@@@@@@@@@@@@@@@@%@%@@@@@@%*+@@@@@@@@@@@*=%@@@@@*+@@%@*+@@@@#@##@@#+++#@@@@+#@%@@%+++@@@@-.::::::-+++#@@@@+-+@@@@*++%@@@@@%@@@%@%@%%%%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@%@@@@@@@%@@@@@@@@@%@%#*@@@@@#+#@@@%+#@@@*%@#@@@++++%@@@%+#@@@@#=+*@@%#::.::::::+++*@@@%=-+@@@@==+#@@@@@@@@%%%%@%%%%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#@@@%@@@@@@%++#@%%%*@@@#*@@%@@=++++@@@@#=%@@@%=++#@@@+.:.::::::=+*+@@@%-:+%@@%:-++@@@@@@@@%%%%@%%%%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@**%@@%@@@@@@*+-%%@@%@@@%+#@@@@*-++++@@@@#*%@%%*-+*%@@%-:::::::.:-++*#@@%-:=%@@%::=+@@@@@%@%%@%@@@%%%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@@*+*@@%%@@@@@#+-:%@%@@@@@++%@@@@:-+++*@@@%%%@%%%:=++@@@+.:::::::.::+++*@@#::=%@@=::=+#@@@@@%%%@%@@@%%%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@%@@@@@@%+++%%%@@@@@@+=:-%%%%@@@+++@@%@=.=+++#@@%@%@%%%*:++*@@%::::::::::.:++++@@#.:=#@%...-+*@@@@@%%%%%@@@%%%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@++=-#%%@@@@@#+::-%%%@@@#++*@%@#::=+++#@@%%%@%%#:-++#@%+::::::::::::+++=@@=::=#@=::::*%@@@@@%%%@@@@@@@%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*++-.*%%@@@@%+=.:-%%%@@%+++*@%@=.:++++%@%%@%%%%-:-+*%%#:.:::::::::::=+==@%:::=%%:=#::++@@@@%%@%%@@@@@@%%%%%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**+-:.=#%@@@@*+:.:-%%@@%:=+*#%%#::-+++*%%%%%%%%*::=++%%=:::::::::::::-+-=@*:.:%@+:.:.:=*@@@@%%%@@@@@@@@%@%@%@#
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%++=::::%%@@@@*-::.-#%%@+:+**%%%-:.-++**%%%%%%%#::-+*#%#::::::::::::::=+-=@*%#-=*.:::::=+%@@@%%%@@@@@@%%%%%@%%*
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*++::::.*%@@@#+::::-#%%#:-+++#%*::.-+**+#%%%%%%-::=++%#:::::::::::::::===%@#+++*::.:.=-=+%@@@@@%@@@@@@%%%%%%@%*
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#++-...::-%@@@*=..::-#%%-:-++-*#+:::-+*+=#%%%%#*:.:++=%=::::::::::.:-..#@*%@*+=:-%@@#...=#%@@@%@@@@@@@%@%@%%@%##
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@***+++=-:-#%@@*-:.:.=##*::=++:*#:...=+*+-*%%%#*:.:=+=+*::::::::::.:.-**+%+%+*@@@@@@@@@@--+@@@@@%*@@@@@%@%@@%@%##
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#++::::::::+%%#=--+*%@@@%+=++=.##:::.=+*+.*##%%-:::=+:*::::::::::::.:+*%**#@@@@@@+==#@@@@@*@@@@%**@@@@@%@%@@%@#*#
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*+=:::::::::#%#=:::::-##+*+++*#@@@@@@@@@%+*#%#-.::=+:+-:::::::::::::=+**@@@@@@@@@*===-*@@@@@@@%+*#@@@@@@@@@%%#***
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@#++:::.::::::=#*-::::::*-.::=+*#@@#*+****+:#%%#:::-+:--:::::::::::::::*@@@+.*@@:=@-..:-*@-%@@@%***%@@@@@@@@@@%#*+#
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@**=::::::::::=@#**+**##%*==-==.=*:=+*******##*.:.:=::::::::::::::::.::@@@:..%@@@@@:...-+.*@@@#*#**@@@@@%@%@%###**%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@++:::::.:.::*@@@@@@@@@@@@@@@@@@@@@@@=+**+=:**::::-:::::::::::::::::::#=%@%*@@@@@=:...--.+@@@#####%@@@@@@@@@%####%@
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@++:::::=*@@@@@@#=*#.:%@@@@@@@@@@@#%@@+:=:::+::::::::::::::::::::::::::.#@@@@@@%:=:..:.:*@@@@%####@@@@@@@@%#####%@%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@*=.:.-%@@@@@*-==**. .:#@@@@@=.:@@*====-=::::::::::::::::::::::::::::...+@%=++=-*+..::.#@##%@%###%@@@@@@@%***+**%%#
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=+==-:@%....%@@@@@@@@@@-...::::.::::::::::::::::::::::::::::::#*=--=#@@++::-:+*##%@%*#@@@@@@@#*+++++%%**
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@#-::=@@@*===:..:@@@@@@@@@@@@@@@@%....:::::::::::::::::::::::::::::::..:--:::::::::::::-****#%@%%@@@@@@#*++**+##+**
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-.::::*@@=:....#@@@@@@@@@@@@#.......:::::::::::::::::::::::::::::::::::::::::::::::::*##***#@@@@@@@%#******%#***#
    @@@@@@@@@@@@@@@@@@@@%@@@@@@@@@+.:::.::.%#.....@@@*===*-===%@@....:::::::::::::::::::::::::::::::::::::::::::::::::=##*****@@@@@@#*******#**####
    @@@@@@@@@@@@@@@@@@@@**@@@@@@@@%..::::::::=+....*@+====--=-+@#@%-::::::::::::::::::::::::::::::::::::::::::::::::::*#*****#@@@@#****************
    @@@@@@@@@@@@@@@@@@@@*++@@@@@@@@=:::::::::::..::.:=@@@@@#+-:::::::::::::::::::::::::::::::::::::::::::::::::::::::-###***#@@@@#######**+********
    @@@@@@@@@@@@@@@@@@@@**+=@@@@@@@%:::::::::.::::.-:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::#@#***#@@##@%######***********
    @@@@@@@@@@@@@@@@@@@@***+:%@@@@@@=::.:::::::::::::::::::::::::::::::::::::::::::::::::::::::::#::.:::::::::::::::=@@%#**##*##@@######**#########
    @@@@@@@@@@@@@@@@@@@@**+++-@@@@@@@.:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::##-::::::::::::::*@@@########@@########%%#######
    @@@@@@@@@@@@@@@@@@@@#*+**=-@@@@@@*:::::::::::::::::::------------:::::::::::::::::::::::::::::. ###:::::::::::::@@@@%##**%%#%@########****#####
    @@@@@@@@@@@@@@@@@@@@#*****-+@@-@@@-:::::::::::::::::-------------:::::::::::::::::::::::::::::::##:::::::::::::#@@@@%**#%%##%@%#######*#**##***
    @@@@@@@@@@@@@@@@@@@@#*****+-#@+:+@@:::::::::::::::::-------------::::::::::::::::::::::::::::::#::::::::::::::-@@@@%###%%###%@########*******++
    @@@@@@@@@@@@@@@@@@@@#***+***-@%.::%#::::::::::::::::::::----------:::::::::::::::::::::::::::::::::::::::::.:.%@@@@#*#%@%###%%########**####***
    @@@@@@@@@@@@@@@@@@@@%#+*+*****@-.::--:.:.::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::%@@@@@%%%%%%###@%###############**
    @@@@@@@@@@@@@@@@@@@@%*#*******@+:::.::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::#@@@@@%%%%%%####@####%#############
    @@@@@@@@@@@@@@@@@@@@@*+*#*****%%::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::.%@@@@@@%@%%%####%%####%@%##%########
    @@@+@@@@@@@@@@@@@@@@@****##****@+::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::.:-@@@@@@@@@@@%%####%#%%##%%%%#%##****##
    @@*+@@@@@@@@@@@@@@@@@**+**+##**@#*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::%@@@@@@@@@@@@%#%%#######%%%%####*******
    @*+*%@@@@@@@@@@@@@@@@*********###**=:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::.:.::*@@@@@@@@@@@@@@%%##**####****##*####**##*
    ***+%@@@@@@@@@@@@@@@@#*********#%#***-.:::::::::::::::::::::::::::::::::::::::::::::::.::::::::::.:.+@@@@@@@@@@@@@%%%###*******+**#*#####******
    ***+#@@@@@@@@@@@@@@@@%************##**+-:::::::::::::::::::::::::::::::::::::=####::::::::::::.::.+@@@@@@@@@@@@@@@###****+++**+++********+++***
    ***+*@@@@@@@@@@@@@@@@%***************%#*+-:::::::::::::::::::::::::::::::=####=:::::::::::::.:::-@@@@@@@@@@@@@@@@**#*******+*****+++*****+++***
    *****@@@@@@@@@@@@@@@@@******************%#+-::::::::::::::::::::::::::::::-:::::::::::::::::::-@@@@@@@@@@@@@@@@@%**********###*+++++********##*
    *****%@@@@@@@@@@@@@@@@********************##+:::::::::::::::::::::::::::::::::::::::::::::..-%@@@@@@@@@@@@@@@@@@%#**++****##**+++++*#*+**#***##
    *****#@@@@@@@@@@@@@@@@#*********************###=::::::::::::::::::::::::::::::::::::::::.::%@@@@@@@@@@@@@@@@@@@@@##**+**#***+++++****++*****##%
    *****#@@@@@@@@@@@@@@@@%*************************#*:::::::::::::::::::::::::::::::::::::::%@@@@@@@@@@@@@@@@@@@@@@@@%#**##**+++***+********#%%%%#
    ******@@@@@@@@@@@@@@@@@******************************=::::::::::::::::::::::::::::.::::%@@@@@@@@@@@@@@@@@@@@@@@@@@#*++****+***++********#######
    ******@@@@@@@@@@@@@@@@@#***************************#***#*:.:.:::::::::::::::::::::.:.*@@@@@@@@@@@@@@@@@@@@@@@@@@@##+***###***++*+++*****#######
    ******@@@@@@@@@@@@@@@@@@************************************#-::::::..:::::::::::::+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**#######*****+++**+**#**+*###
    ******@@@@@@@@@@@@@@@@@@***********************************###****=:.::-::.::::::+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@####******#########*###*#*####
    -+****@@@@@@@@@@@@@@@@@@#*********************************#***#***#*=:-==:::.-.=:.:..:%@@@@@@@@@@@@@@@@@@@@@@@@@@####*#####%%%%%%%%#####%######
    ::-***@@@@@@@@@@@@@@@@@@@*******************************##**********-::+@@@@@@:........:..+@@@@@@@@@@@@@@@@@@@@@@%##**####%%%##%%%%###%%#%#####
    ::::=*@@@@@@@@@@@@@@@@@@@#*****************************%#**********=:::@@@@@@%:...........:: .@@@@@@@@@@@@@@@@@@@%##*######**####%%%######%####
    :::::.*@@@@@@@@@@@@@@@@@@%***************************##*****#******-::=@@@@@@#........:..::...=@@@@@@@@@@@@@@@@@@@########**###*##%%%#####%%#**
    ::::::+@@@@@@@@@@@@@@@@@@@**************************%#************=:::@@@@@@@=..::............:@@@@@@@@@@@@@@@@@@@%%%#########*#*#########%%###
    @-::::-@@@@@@@@@@@@@@@@@@@%************************#*************+:::#@@@@@@@::............::::*@@@@@@@@@@@@@@@@@@@%%#########*****#######%%#%%
    @@%-::-@@@@@@@@@@@@@@@@@@@@***#******************##*************+:::=@@@@@@@-:::.::::::::::.:.::@@@@@@@@@@@@@@@@@@%%%%%%######*##***#####%%###%
    @@@@%::@@@@@@@@@@@@@@@@@@@@#*********************%**************-::+@@@@@@@#:::::::::::::::::::.*@@@@@@@@@@@@@@@@@*+%@%%%%%%###***+*##%%%%%##%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@********************#**************-::=@@@@@@@#.::::::::::::::::.:::-@@@@@@@@@@@@@@@@@#:::*@@%%%#*##***###%%#%%##%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@%*****#******#*****##*#***********:::*@@@@@@@@:.::::::::::::::::::::-@@@@@@@@@@@@@@@@@@:..::#%@@#**###*#***###%#%%%
    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@**#***************%********#****-:-@@@@@@@@#.:.:::::::::::::::::::::@@@@@@@@@@@@@@@@@@+:::::-@@%@@###*#%##%%%%#%@@
    -@@@@@@@@@@@@@@@@@@@@@@@@@@@@#-=*#*************##*#********+-:#@@@@@@@@=:::::::::::::::::::::::::%@@@@@@@@@@@@@@@@@#::::::.%@@@%%#%%%%%%%%%%%@%
    :::*@@@@@@@@@@@@@@@@@@@@@@@@@@=:::=*****#*******%*#*******=:#@@@@@@@@@:::::::::::::::::::::::::::=@@@@@@@@@@@@@@@@@@-::::::.*%%%%%%%%%@@@@%%%%%
    ::--:=@@@@@@@@@@@@@@@@@@@@@@@@%:::::-=+******#***%******+-@@@@@@@@@@=:::::::::::::::::::::::::::::@@@@@@@@@@@@@@@@@@+::::::::#@@@%%%%%@@@@%%%%%
    --:::-::%@@@@@@@@@@@@@@@@@@@@@@*:--::::::-+****#******%@@@@@@@@@@@-:::::::::::::::::::::::::-:-:::#@@@@@@@@@@@@@@@@@@:::::::::#@@@@@@@@@@%%%%%%
    ------::*@@@@@@@@@@@@@@@@@@@@@@@@@@*-:::::::::-:-+%@@@@@@@@@@@@@-::::::::::::::::::::::::::::::=::+@@@@@@@@@@@@@@@@@@=:::::::::%@@@@@@@@@@@@@@%
    ---------@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#:-:::::::::::::::::::::::::::-:::-=:-@@@@@@@@@@@@@@@@@@#:::::::::-%@%@@@@@@@@@@@@
    --------:%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=---::::--------------------------::::-=:@@@@@@@@@@@@@@@@@@@-:::::::::*%@@@@@@@@@@@@@
    ---------*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%=-:-:-:----------------------------------:--==@@@@@@@@@@@@@@@@@@%:--::::::-@@@@@%@@@@@@@@
    ------=--=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#=------:---:-------------------------------------:=:@@@@@@@@@@@@@@@@@@@=:::::::-:+@@@@@@@@@%@@@




*/

/*
      __
     /  l
   .'   :               __.....__..._  ____
  /  /   \          _.-"        "-.  ""    "-.
 (`-: .---:    .--.'          _....J.         "-.
  """y     \,.'    \  __..--""       `+""--.     `.
    :     .'/    .-"""-. _.            `.   "-.    `._.._
    ;  _.'.'  .-j       `.               \     "-.   "-._`.
    :    / .-" :          \  `-.          `-      "-.      \
     ;  /.'    ;          :;               ."        \      `,
     :_:/      ::\        ;:     (        /   .-"   .')      ;
       ;-"      ; "-.    /  ;           .^. .'    .' /    .-"
      /     .-  :    `. '.  : .- / __.-j.'.'   .-"  /.---'
     /  /      `,\.  .'   "":'  /-"   .'       \__.'
    :  :         ,\""       ; .'    .'      .-""
   _J  ;         ; `.      /.'    _/    \.-"
  /  "-:        /"--.b-..-'     .'       ;
 /     /  ""-..'            .--'.-'/  ,  :
:`.   :     / :             `-i" ,',_:  _ \
:  \  '._  :__;             .'.-"; ; ; j `.l
 \  \          "-._         `"  :_/ :_/
  `.;\             "-._
    :_"-._             "-.
      `.  l "-.     )     `.
        ""^--""^-. :        \
                  ";         \
                  :           `._
                  ; /    \ `._   ""---.
                 / /   _      `.--.__.'
                : :   / ;  :".  \
                ; ;  :  :  ;  `. `.
               /  ;  :   ; :    `. `.
              /  /:  ;   :  ;     "-'
             :_.' ;  ;    ; :
                 /  /     :_l
                 `-'
*/