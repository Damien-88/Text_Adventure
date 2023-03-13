// Text_Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

# include <iostream>
# include <list>
using namespace std;

// Total Friends Function
int friends(int friend1, int friend2, int friend3) {

    return friend1 + friend2 + friend3; 

}

// Total Dillema
int dilemma_total(int dil1, int dil2, int dil3) {

    return dil1 + dil2 + dil3; 

}

// Ship Choice Functions
int wake_onshore() {

    std::cout << "  You wake up on the shore of an island, cold and confused.\n\n"
        << "  You look around for your friends, but only see two!\n"
        << "  THEODORE! Where is Theodore???\n"
        << "  In a panic, you rush over to your other friends.\n"
        << "  Malachi is still out, but is breathing. Francis is conscious, but appears confused.\n"
        << "  You ask Francis where Theodore is.\n"
        << "  A look of terror overcomes Francis and she immediately bolts toward the water!\n"
        << "  Without even thinking, you take off after her.\n"
        << "  When you reach her, she breaks down. Bawling her eyes out she exclaims... \n"
        << "  Theodore didn't make it!!\n"
        << "  Once she catches her breath, she explains. Theodore managed to get everyone on random items from the ship that were floating nearby.\n"
        << "  As he lifted you out of the water, a waved crashed over him. He was pulled under and... never came back up.\n"
        << "  As Francis is speaking, Malachi awakens.\n"
        << "  You check on Malachi to find that, barring some scrapes and bruises, he is okay.\n\n\n";
    
    return 0;

}

// Endings
int ending_one(int ftotal, string player_name) {

    std::cout << "      All of your friends are standing there, together!\n\n";

    if (ftotal == 2) {

        std::cout << "      Even Theodore is with them. Alive and well!\n\n";

    }

    else if (ftotal == 1) {

        std::cout << "      Both Theodore and Francis are there. Alive and well!\n\n";

    }

    else if (ftotal == 0) {

        std::cout << "      Alive and well!\n\n";

    }

    std::cout << "      Just beyond them is a mountain of treasure.\n\n"
        << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n"
        << "      You have answered well " << player_name << "!\n\n"
        << "      As a reward for answering all questions with selfless integrity and grace, I have given you...\n\n"
        << "          Anyone you may have lost here, returned to you.\n\n"
        << "          Complete confidence to help you in finding love.\n\n"
        << "          The treasure you see before you.\n\n"
        << "          It is more than enough wealth to rid the world of famine.\n\n"
        << "          Lastly, I have given the gift of immortality to give you time to gain all knowledge.\n\n"
        << "      Together, these gifts give you all of the tools necessary to solve any of the world's problems.\n\n\n"
        << "      I leave you with complete faith that you have the ability to wield these tools to their full potential.\n\n\n\n";

    return 0;

}

int ending_two(int dil_1, int dil_2, int dil_3, int ftotal, string player_name) {

    if (dil_1 == 1 && dil_2 == 1) {

        if (ftotal == 3) {

            std::cout << "      You see your friends standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 2) {

            std::cout << "      You see Francis and Malachi standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 1) {

            std::cout << "      You see Malachi standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 0) {

            std::cout << "      You see nothing.\n\n"
                << "      As you stand there perplexed, you hear the creatures voice.\n\n";

        }

        std::cout << "      Though not completely, you have appeased me with your answers.\n\n"
            << "      I shall reward you with the following.\n\n"
            << "          Complete confidence to help you in finding love.\n\n"
            << "          The treasure you see before you.\n\n"
            << "          It is more than enough wealth to rid the world of famine.\n\n\n"
            << "      I leave you with complete faith that you have the ability to wield these tools to their full potential.\n\n\n\n";

    }

    else if (dil_2 == 1 && dil_3 == 1) {

        if (ftotal == 3) {

            std::cout << "      You see your friends standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 2) {

            std::cout << "      You see Francis and Malachi standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 1) {

            std::cout << "      You see Malachi standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 0) {

            std::cout << "      You see a mountain of gold.\n\n"
                << "      As you stand there perplexed, you hear the creatures voice.\n\n";

        }

        std::cout << "      Though not completely, you have appeased me with your answers.\n\n"
            << "      I shall reward you with the following...\n\n"
            << "          The treasure you see before you.\n\n"
            << "          It is more than enough wealth to rid the world of famine.\n\n"
            << "          The gift of immortality to give you time to gain all knowledge.\n\n\n"
            << "      I leave you with complete faith that you have the ability to wield these tools to their full potential.\n\n\n\n";

    }

    else if (dil_3 == 1 && dil_1 == 1) {

        if (ftotal == 3) {

            std::cout << "      You see your friends standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 2) {

            std::cout << "      You see Francis and Malachi standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 1) {

            std::cout << "      You see Malachi standing there.\n\n"
                << "      As you reunite with your friends, overwhelmed with joy, you hear the voice of the creature.\n\n";

        }

        else if (ftotal == 0) {

            std::cout << "      You see nothing.\n\n"
                << "      As you stand there perplexed, you hear the creatures voice.\n\n";

        }

        std::cout << "      Though not completely, you have appeased me with your answers.\n\n"
            << "      I shall reward you with the following...\n\n"
            << "          Complete confidence to help you in finding love.\n\n"
            << "          The gift of immortality to give you time to gain all knowledge.\n\n\n"
            << "      I leave you with complete faith that you have the ability to wield these tools to their full potential.\n\n\n\n";

    }

    return 0;

}

int ending_three(int dil_1, int dil_2, int dil_3, string player_name) {

    if (dil_1 == 1) {

        std::cout << "      You see nothing.\n\n"
            << "      As you stand there perplexed, you hear the creatures voice.\n\n"
            << "      You dissapointed me with your answers " << player_name << "!\n\n"
            << "          As you did choose love over wealth, I have given you complete confidence.\n\n"
            << "          However, because of the nature of your other answers, I fear it may do you no good.\n\n"
            << "          Since you desire immortality so badly, you will now live forever.\n\n"
            << "          Since you crave power as well, I have made you the leader of the world.\n\n"
            << "      I hope you enjoy these things as there is more.\n\n"
            << "      If you look around, you will see noone else is around.\n\n"
            << "      The world you now lead is completely empty.\n\n"
            << "      Except for you!\n\n"
            << "          You may have complete confidence, but there is no one around to impress.\n\n"
            << "          You may be immortal, but you will live forever alone.\n\n"
            << "          You will always be hungry, but never be able to satisfy that hunger.\n\n"
            << "          You have complete power over everyone and everything in your new world.\n\n\n"
            << "      Fair well, " << player_name << "!\n\n\n\n";

    }

    else if (dil_2 == 1) {

        std::cout << "      You see a mountain of gold.\n\n"
            << "      As you make your way over to immerse yourself in your newfound wealth, you hear the creatures voice.\n\n"
            << "      You dissapointed me with your answers " << player_name << "!\n\n"
            << "          As you did choose to rid the world of famine, I have given you the riches to do so.\n\n"
            << "          However, because of the nature of your other answers, I fear it may do you no good.\n\n"
            << "          You have proven that you cannot be trusted to use your newfound treasure to help the hungry.\n\n"
            << "          Since you desire wealth so much, you get to keep this mountain of treasure.\n\n"
            << "          Since you crave power as well, I have made you the leader of a the world.\n\n"
            << "      I hope you enjoy these things as there is more.\n\n"
            << "      If you look around, you will see noone else is around.\n\n"
            << "      The world you now lead is completely empty.\n\n"
            << "      Except for you!\n\n"
            << "          You may be rich, but you will never know love.\n\n"
            << "          You may be immortal, but you will live forever alone.\n\n"
            << "          You have complete power over everyone and everything in your new world.\n\n\n"
            << "      Fair well, " << player_name << "!\n\n\n\n";

    }

    else if (dil_3 == 1) {

        std::cout << "      You see a mountain of gold.\n\n"
            << "      As you make your way over to immerse yourself in your newfound wealth, you hear the creatures voice.\n\n"
            << "      You dissapointed me with your answers " << player_name << "!\n\n"
            << "          As you did choose knowledge over power, I have given you immortality to give you time to gain all knowledge.\n\n"
            << "          However, because of the nature of your other answers, I fear it may do you no good.\n\n"
            << "          You have proven you cannot be trusted to use your time wisely.\n\n"
            << "          Since you desire wealth so much, I gave you this mountain of treasure.\n\n"
            << "      I hope you enjoy these things as there is more.\n\n"
            << "      If you look around, you will see noone else is around.\n\n"
            << "      The world you now live in is completely empty.\n\n"
            << "      Except for you!\n\n"
            << "          You may be rich, but you will never know love.\n\n"
            << "          You may be immortal, but you will live forever alone.\n\n"
            << "          You will always be hungry, but never be able to satisfy that hunger.\n\n"
            << "          You have complete power over everyone and everything in your new world.\n\n\n"
            << "      Fair well, " << player_name << "!\n\n\n\n";

    }

    return 0;

}

int ending_four(string player_name) {

    std::cout << "      Directly in front of you is a mountain of treasure!\n\n"
        << "      As you make your way over to immerse yourself in your newfound wealth, you hear the creatures voice.\n\n"
        << "      You dissapointed me with your answers " << player_name << "!\n\n"
        << "          Since you desire wealth so much, I gave you this mountain of treasure.\n\n"
        << "          Since you desire immortality so badly, you will now live forever.\n\n"
        << "          Since you crave power as well, I have made you the leader of the world.\n\n"
        << "      I hope you enjoy these things as there is more.\n\n"
        << "      If you look around, you will see noone else is around.\n\n"
        << "      The world you now lead is completely empty.\n\n"
        << "      Except for you!\n\n"
        << "          You may be rich, but you will never know love.\n\n"
        << "          You may be immortal, but you will live forever alone.\n\n"
        << "          You will always be hungry, but never be able to satisfy that hunger.\n\n"
        << "          You have complete power over everyone and everything in your new world.\n\n\n"
        << "      Fair well, " << player_name << "!\n\n\n\n";

    return 0;

}


int main() {

    string user_name = "";
    string cross_name = "";

    string pronoun = "";
    string pronoun2 = "";
    string pronoun3 = "";

    int answer_one = 0;
    int answer_two = 0;
    int answer_three = 0;
    int answer_four = 0;

    int fog = 0;
    int resume = 0;

    int dilemma_one = 0;
    int dilemma_two = 0;
    int dilemma_three = 0;

    int theodore = 1;
    int francis = 1;
    int malachi = 1;
    int you = 0;

    // Title
    std::cout << "  ===============================================================================================================================================================\n\n"
        << "                                                                       The Island\n\n"
        << "  ===============================================================================================================================================================\n\n\n";

    // Intro
    std::cout << "  You and your friends (Theodore, Francis, and Malachi) are on a journey to find a mysterious island that is said to appear only once every twenty five years.\n"
        << "  After years of research and planning, you feel that you have everything you need to find the island and reveal the secrets within.\n\n\n";

    // User Name
    std::cout << "          Name your character: ";

    std::cin >> user_name;

    // Begin.
    std::cout << "\n\n  After just 2 days out at sea, you and your friends arrive at the coordinates the island is suspected to appear.\n"
        << "  There is a thick fog ahead and, as the leader of this expedition, you have a choice to make : \n\n";

    // On The Ship
    while (true) {

        std::cout << "          Enter 1 to anchor in place and try to wait it out.\n\n"
            << "          Enter 2 to go around the fog to find an opening.\n\n"
            << "          Enter 3 to brave the fog and travel straight through\n\n"
            << "          Answer: ";

        std::cin >> answer_one;

        if (answer_one == 1) {

            std::cout << "\n\n  You have decided to wait out the fog!\n\n";

            std::cout << "  Eight hours have passed. It is dusk, the fog has yet to lift, and a storm appears to be rolling in from the west.\n"
                << "  Once again, you must make a decision.\n\n"
                << "          Enter 1 to push through the fog.\n\n"
                << "          Enter 2 to continue to wait it out.\n\n"
                << "          Answer: ";

            std::cin >> answer_two;

            if (answer_two == 1) {

                std::cout << "\n\n  You have decided to go straight through the fog!\n\n"
                    << "  The fog is so thick you cannot see anything around the ship.\n"
                    << "  As you venture further in, the fog gets heavier. You quickly lose sight of everyone and everything on board.\n";
                std::cout << "  You have another decision to make!\n\n"
                    << "          Enter 1 to turn around.\n\n"
                    << "          Enter 2 to keep course\n\n"
                    << "          Answer: ";

                std::cin >> fog;

                if (fog == 1) {

                    std::cout << "\n\n  You have decided to turn around!\n\n"
                        << "  You quickly head back in the direction in which you came.\n"
                        << "  Or, so you think!\n"
                        << "  After traveling for what seems like forever in the dense fog, you finally realize that you are not headed in the direction you thought.\n"
                        << "  You change course in an attempt to correct your mistake.\n"
                        << "  Again, you travel for what seems like hours. But you still have yet to emerge from the fog.\n"
                        << "  Beginning to panic, you change course over and over.\n"
                        << "  Never getting anywhere.\n"
                        << "  Everyone begins to argue as panic sets in.\n"
                        << "  Just as everyone is at each others throats... BAM!\n"
                        << "  The ship strikes something and begins to sink.\n"
                        << "  You attempt to stick together, but the suction from the sinking ship pulls you under and you lose consciousness.\n\n\n";

                    theodore = 0;

                    std::cout << "          Enter 1 to continue ";
                    std::cin >> resume;
                    std::cout << "\n\n\n";

                    wake_onshore();

                }

                else if (fog == 2) {

                    std::cout << "\n\n  You have decided to brave the fog and keep course.\n\n"
                        << "  Within minutes the fog begins to clear and you see what appears to be the silhouette of an island.\n"
                        << "  As you approach, it becomes clear.\n"
                        << "  It is not just an island... It is THE ISLAND!!\n"
                        << "  Just as you begin to fathom what you are seeing... BAM!\n"
                        << "  Everyone is jolted forward as the ship comes to an abrupt stop.\n"
                        << "  You have hit land!\n"
                        << "  Everyone is so full of excitement that they rush off of the ship without a moments thought.\n"
                        << "  We have made it! You exclaim. As you take in the sight.\n\n\n\n";

                    std::cout << "          Enter 1 to continue ";
                    std::cin >> resume;
                    std::cout << "\n\n\n";

                }

            }

            else if (answer_two == 2) {

                std::cout << "\n\n  You decided to continue to wait it out.\n\n"
                    << "  This decision was not the wisest. The storm was moving much faster than you had anticipated. Before you can react, the storm completely envelopes you.\n\n\n";

                theodore = 0;

                std::cout << "          Enter 1 to continue ";
                std::cin >> resume;
                std::cout << "\n\n\n";

                wake_onshore();

            }

            break;

        }

        else if (answer_one == 2) {

            std::cout << "\n\n  You have decided to go around the fog!\n\n";

            std::cout << "  As you make your way around the fog, you notice a storm quickly moving in your direction.\n"
                << "  You make every effort to change course and out run the storm. However, it is all for not.\n"
                << "  The ship is not fast enough and you are all swallowed by the storm! \n\n\n";

            theodore = 0;

            std::cout << "          Enter 1 to continue ";
            std::cin >> resume;
            std::cout << "\n\n\n";

            wake_onshore();

            break;
        }
        else if (answer_one == 3) {

            std::cout << "\n\n  You have decided to go straight through the fog!\n\n"
                << "  The fog is so thick you cannot see anything around the ship.\n"
                << "  As you venture further in, the fog gets heavier. You quickly lose sight of everyone and everything on board.\n";
            std::cout << "  You have another decision to make!\n\n"
                << "          Enter 1 to turn around.\n\n"
                << "          Enter 2 to keep course\n\n"
                << "          Answer: "; 

            std::cin >> fog;

            if (fog == 1) {

                std::cout << "\n\n  You have decided to turn around!\n\n"
                    << "  You quickly head back in the direction in which you came.\n"
                    << "  Or, so you think!\n"
                    << "  After traveling for what seems like forever in the dense fog, you finally realize that you are not headed the direction you thought.\n"
                    << "  You change course in an attempt to correct your mistake.\n"
                    << "  Again, you travel for what seems like hours. But you still have yet to emerge from the fog.\n"
                    << "  Beginning to panic, you change course over and over.\n"
                    << "  Never getting anywhere.\n"
                    << "  Everyone begins to argue as panic sets in.\n"
                    << "  Just as everyone is at each others throats... BAM!\n"
                    << "  The ship strikes something and begins to sink.\n"
                    << "  You attempt to stick together, but the suction from the sinking ship pulls you under and you lose consciousness.\n\n\n";

                theodore = 0;

                std::cout << "          Enter 1 to continue ";
                std::cin >> resume;
                std::cout << "\n\n\n";

                wake_onshore();

            }

            else if (fog == 2) {

                std::cout << "\n\n  You have decided to brave the fog and keep course.\n\n"
                    << "  Within minutes the fog begins to clear and you see what appears to be the silhouette of an island.\n"
                    << "  As you approach, it becomes clear.\n"
                    << "  It is not just an island... It is THE ISLAND!!\n"
                    << "  Just as you begin to fathom what you are seeing... BAM!\n"
                    << "  Everyone is jolted forward as the ship comes to an abrupt stop.\n"
                    << "  You have hit land!\n"
                    << "  Everyone is so full of excitement that they rush off of the ship without a moments thought.\n"
                    << "  We have made it! You exclaim. As you take in the sight.\n\n\n";

                std::cout << "          Enter 1 to continue ";
                std::cin >> resume;
                std::cout << "\n\n\n";

            }

            break;

        }

        else {

            std::cout << "\n            Please enter a valid numerical response: 1, 2, or 3\n\n";
            continue;

        }

    }

    // On Shore
    std::cout << "  Suddenly, you hear screams from the tree line.\n"
        << "  Right as you look up, a hoard of dark figures come bolting out of the forest.\n";

    std::cout << "  You do not have time to think, you must make a decision!\n\n";

    while (true) {

        std::cout << "  Which way do you run???\n\n"
            << "          Enter 1 for left.\n\n"
            << "          Enter 2 for right.\n\n"
            << "          Answer: "; 

        std::cin >> answer_three;

        //Left
        if (answer_three == 1 && friends(theodore, francis, malachi) == 3) {

            std::cout << "\n\n  You have chosen to run left.\n\n";

            std::cout << "  You hurry to your friends and take off running.\n"
                << "  Together you sprint as fast as you can, until you reach the edge of the forest.\n"
                << "  Without slowing, you rush inside and continue to run until you can run no more.\n"
                << "  You look back and see that you have lost your pursuers.\n"
                << "  You catch your breath and ensure everyone is accounted for.\n"
                << "  You, Francis, Theodore, and Malachi drop to the ground and take a well deserved rest.\n\n\n";

            std::cout << "          Enter 1 to continue ";
            std::cin >> resume;
            std::cout << "\n\n\n";

            break;

        }

        else if (answer_three == 1 && friends(theodore, francis, malachi) < 3) {

            std::cout << "\n\n  You have chosen to run left.\n\n";

            std::cout << "  You hurry to your friends, help Malachi to his feet, and take off running.\n"
                << "  Together you sprint as fast as you can, until you reach the edge of the forest.\n"
                << "  Without slowing, you rush inside and continue to run until you can run no more.\n"
                << "  You look back and see that you have lost your pursuers.\n"
                << "  You catch your breath and ensure everyone is accounted for.\n"
                << "  You, Francis, and Malachi drop to the ground and take a well deserved rest.\n\n\n";

            std::cout << "          Enter 1 to continue ";
            std::cin >> resume;
            std::cout << "\n\n\n";

            break;

        }

        // Right
        else if (answer_three == 2 && friends(theodore, francis, malachi) == 3) {

            std::cout << "\n\n  You have chosen to run right.\n\n";

            std::cout << "  You immediately take off running.\n"
                << "  You sprint as fast as you can, without looking back.\n"
                << "  You make it to a cave at the edge of the tree line and run inside.\n"
                << "  Completely exhausted, you jump behind the first cover you find.\n"
                << "  As you catch your breath, you look back to see that you have lost your pursuers.\n"
                << "  But Wait!!\n"
                << "  Where are your friends??\n"
                << "  They must have run the other way!\n"
                << "  You run back out of the cave to find your friends.\n"
                << "  Just as you exit the cave you hear Malachi calling for Francis in the forest.\n"
                << "  Then, nothing.\n"
                << "  You hurry in the direction of the scream.\n"
                << "  You make it to where you last heard Malachi, but you see nothing.\n"
                << "  Someone jumps out from behind you and grabs your shoulder.\n"
                << "  You quickly spin around, ready to fight for your life.\n"
                << "  As you come around, you freeze!\n"
                << "  It's Malachi!\n"
                << "  With heavy breathes he exclaims...\n";

            std::cout << "  They Got Theodore!\n"
                << "  In a panic, you ask for clarity.\n"
                << "  We were running and he was hit with a spear. I stopped to try and help him, but...\n"
                << "  He was gone.\n"
                << "  They were catching up, so I had to run.\n"
                << "  I left him right... \n"
                << "  Malachi pointed to where he fell and paused.\n"
                << "  Where he pointed, there was nothing but blood staining the ground and a medalion Theodore carried everywhere.\n"
                << "  Just then, Francis comes barreling out of the brush.\n"
                << "  You and Malichi explain the tragedy that befell Theodore.\n\n\n";

            theodore = 0;

            std::cout << "          Enter 1 to continue ";
            std::cin >> resume;
            std::cout << "\n\n\n";

            break;

        }

        else if (answer_three == 2 && friends(theodore, francis, malachi) < 3) {

            std::cout << "\n\n  You have chosen to run right.\n\n";

            std::cout << "  You immediately take off running.\n"
                << "  You sprint as fast as you can, without looking back.\n"
                << "  You make it to a cave at the edge of the tree line and run inside.\n"
                << "  Completely exhausted, you jump behind the first cover you find.\n"
                << "  As you catch your breath, you look back to see that you have lost your pursuers.\n"
                << "  But Wait!!\n"
                << "  Where are your friends??\n"
                << "  They must have run the other way!\n"
                << "  You run back out of the cave to find your friends.\n"
                << "  Just as you exit the cave you hear Malachi calling for Francis in the forest.\n"
                << "  Then, nothing.\n"
                << "  You hurry in the direction of the scream.\n"
                << "  You make it to where you last heard Malachi, but you see nothing.\n"
                << "  Someone jumps out from behind you and grabs your shoulder.\n"
                << "  You quickly spin around, ready to fight for your life.\n"
                << "  As you come around, you freeze!\n"
                << "  It's Malachi!\n"
                << "  With heavy breathes he exclaims...\n";

            std::cout << "  They Got Francis!\n"
                << "  In a panic, you ask for clarity.\n"
                << "  We were running and she was hit with a spear. I stopped to try and help her, but...\n"
                << "  She was gone.\n"
                << "  They were catching up, so I had to run.\n"
                << "  I left her right... \n"
                << "  Malachi pointed to where she fell and paused.\n"
                << "  Where he pointed, there was nothing but blood staining the ground and a pack Francis had around her waist.\n\n\n";

            francis = 0;

            std::cout << "          Enter 1 to continue ";
            std::cin >> resume;
            std::cout << "\n\n\n";

            break;

        }

        else {

            std::cout << "\n          Please enter a valid numerical response: 1 or 2\n\n";
            continue;

        }

    }

    // In The Forest
    std::cout << "  After taking a bit to calm down and clear your thoughts, you decide to drudge on.\n"
        << "  Your pursuers are most likely still scowering the beach. So, the only option is to go deeper into the forest.\n\n";
    
    if (friends(theodore, francis, malachi) > 1) {

        std::cout << "  After a short trek, you and your friends happen upon a rickety bridge.\n";

    }

    else if (friends(theodore, francis, malachi) == 1) {

        std::cout << "  After a short trek, you and Malachi happen upon a rickety bridge.\n";

    }
    
    std::cout << "  The bridge looks very old and there is a fifty foot drop into a large river.\n"
        << "  You suggest taking a minute to decide how you are going to approach this.\n"
        << "  Malachi suggests a game of rock paper scissors, to decide who will go first.\n"
        << "  Everyone is in agreement. You begin in...\n\n"
        << "  Three\n\n"
        << "  Two\n\n"
        << "  One\n\n";

    // The Bridge
    while (true) {

        std::cout << "          Enter 1 Rock.\n\n"
            << "          Enter 2 for Paper.\n\n"
            << "          Enter 3 for Scissors\n\n"
            << "          Answer: "; 

        std::cin >> answer_four;

        if (answer_four <= 3) {

            srand(time(NULL));

            int rps_malachi = rand() % 2 + 1;
            int rps_francis = rand() % 2 + 1;
            int rps_theodore = rand() % 2 + 1;

            string rock_paper_scissors = "";

            // One Friend Left
            if (friends(theodore, francis, malachi) == 1) {

                if (answer_four == 1) {

                    std::cout << "\n\n  You chose Rock.\n\n"
                        << "  Malachi chose ";

                    if (rps_malachi == 1) {

                        std::cout << "Paper.\n\n"
                            << "  Malachi will cross first!\n\n\n";
                        you = 0;

                    }

                    else if (rps_malachi == 2) {

                        std::cout << "Scissors.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                }

                else if (answer_four == 2) {

                    std::cout << "\n\n  You chose Paper.\n\n"
                        << "  Malachi chose ";

                    if (rps_malachi == 1) {

                        std::cout << "Rock.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                    else if (rps_malachi == 2) {

                        std::cout << "Scissors.\n\n"
                            << "  Malachi will cross first!\n\n\n";
                        you = 0;

                    }

                }

                else if (answer_four == 3) {

                    std::cout << "\n\n  You chose Scissors.\n\n"
                        << "  Malachi chose ";

                    if (rps_malachi == 1) {

                        std::cout << "Paper.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                    else if (rps_malachi == 2) {

                        std::cout << "Rock.\n\n"
                            << "  Malachi will cross first!\n\n\n";
                        you = 0;

                    }

                }

            }

            // Two Friends Left
            else if (friends(theodore, francis, malachi) == 2) {

                if (answer_four == 1) {

                    std::cout << "\n\n  You chose Rock.\n\n"
                        << "  Francis chose ";

                    if (rps_francis == 1) {

                        std::cout << "Paper.\n\n"
                            << "  Malachi chose Scissors.\n\n"
                            << "  Francis will cross first!\n\n\n";
                        you = 0;

                    }

                    else if (rps_francis == 2) {

                        std::cout << "Scissors.\n\n"
                            << "  Malachi chose Scissors.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                }

                else if (answer_four == 2) {

                    std::cout << "\n\n  You chose Paper.\n\n"
                        << "  Francis chose ";

                    if (rps_francis == 1) {

                        std::cout << "Rock.\n\n"
                            << "  Malachi chose Rock.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                    else if (rps_francis == 2) {

                        std::cout << "Scissors.\n\n"
                            << "  Malachi chose Rock.\n\n"
                            << "  Francis will cross first!\n\n\n";
                        you = 0;

                    }

                }

                else if (answer_four == 3) {

                    std::cout << "\n\n  You chose Scissors.\n\n"
                        << "  Francis chose ";

                    if (rps_francis == 1) {

                        std::cout << "Paper.\n\n"
                            << "  Malachi chose Paper.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                    else if (rps_francis == 2) {

                        std::cout << "Rock.\n\n"
                            << "  Malachi chose Paper.\n\n"
                            << "  Francis will cross first\n\n";
                        you = 0;

                    }

                }

            }

            // Three Friends Left
            else if (friends(theodore, francis, malachi) == 3) {

                if (answer_four == 1) {

                    std::cout << "\n\n  You chose Rock\n\n"
                        << "  Theodore chose ";

                    if (rps_theodore == 1) {

                        std::cout << "Paper\n\n"
                            << "  Francis chose Paper\n\n"
                            << "  Malachi chose Scissors\n\n"
                            << "  Francis and Theodore tied and go again.\n\n"
                            << "  Theodore lost the second round.\n\n"
                            << "  Theodore will cross first!\n\n\n";
                        you = 0;

                    }

                    else if (rps_theodore == 2) {

                        std::cout << "Scissors.\n\n"
                            << "  Francis chose Scissors.\n\n"
                            << "  Malachi chose Scissors.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                }

                else if (answer_four == 2) {

                    std::cout << "\n\n  You chose Paper\n\n"
                        << "  Theodore chose ";

                    if (rps_theodore == 1) {

                        std::cout << "Rock\n\n"
                            << "  Francis chose Rock\n\n"
                            << "  Malachi chose Rock\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                    else if (rps_theodore == 2) {

                        std::cout << "Scissors\n\n"
                            << "  Francis chose Rock\n\n"
                            << "  Malachi chose Rock\n\n"
                            << "  Theodore will cross first!\n\n\n";
                        you = 0;

                    }

                }

                else if (answer_four == 3) {

                    std::cout << "\n\n  You chose Scissors\n\n"
                        << "  Theodore chose ";

                    if (rps_theodore == 1) {

                        std::cout << "Paper\n\n"
                            << "  Francis chose Paper.\n\n"
                            << "  Malachi chose Paper.\n\n"
                            << "  You will cross first!\n\n\n";
                        you = 1;

                    }

                    else if (rps_theodore == 2) {

                        std::cout << "Rock\n\n"
                            << "  Francis chose Scissors\n\n"
                            << "  Malachi chose Rock \n\n"
                            << "  Theodore and Malachi tied and go again.\n\n"
                            << "  Theodore lost the second round.\n\n"
                            << "  Theodore will cross first!\n\n\n";
                        you = 0;

                    }

                }

            }

            std::cout << "          Enter 1 to continue ";
            std::cin >> resume;
            std::cout << "\n\n\n";

            break;

        }

        else {

            std::cout << "\n          Please enter a valid numerical response: 1, 2, or 3.\n\n";

            continue;

        }

    }


    if (friends(theodore, francis, malachi) == 3) {

        cross_name = "Theodore";
        pronoun = "he";
        pronoun2 = "his";
        pronoun3 = "him";

    }

    else if (friends(theodore, francis, malachi) == 2) {

        cross_name = "Francis";
        pronoun = "she";
        pronoun2 = "her";
        pronoun3 = "her";

    }

    else if (friends(theodore, francis, malachi) == 1) {

        cross_name = "Malachi";
        pronoun = "he";
        pronoun2 = "his";
        pronoun3 = "him";

    }

    if (you == 1) {

        std::cout << "  You begin to make your way accross the bridge.\n"
            << "  With every step, you hear more creaking and popping.\n"
            << "  The bridge feels so unstable.\n"
            << "  The further you go, the more the bridge sways and the more dangerous it feels.\n";

        if (friends(theodore, francis, malachi) > 1) {

            std::cout << "  Just past the halfway point, you look back to see your friends cheering in support.\n"
                << "  Just as you turn to continue...\n"
                << "  SNAP!!!\n"
                << "  The floor falls out from under you!\n"
                << "  You frantically grab at anything you can get ahold of, but miss everything.\n"
                << "  Out of nowhere, a hand grabs yours.\n"
                << "  It is Francis\n"
                << "  I've got you, she exclaims as she's pulling you up.\n"
                << "  After taking a moment to grasp the realities of what almost happened, you make your way to the end of the bridge.\n"
                << "  Followed shortly by your friends.\n\n\n";

        }

        else if (friends(theodore, francis, malachi) == 1) {

            std::cout << "  Just past the halfway point, you look back to see Malachi watching you intently.\n"
                << "  You have lost so many friends already.\n"
                << "  Neither of you could bare to lose another!\n"
                << "  Just as you turn to continue...\n"
                << "  SNAP!!!\n"
                << "  The floor falls out from under you!\n"
                << "  You frantically grab at anything you can get ahold of, barely catching the bottom rope.\n"
                << "  You look up to see Malachi running toward you.\n"
                << "  Worried that he may fall too, you yell for him to wait\n"
                << "  Malachi stops in his tracks, while you manage to pull yourself up.\n"
                << "  After taking a moment to grasp the realities of what almost happened, you make your way to the end of the bridge.\n"
                << "  Followed shortly by Malachi.\n\n\n";

        }

        std::cout << "          Enter 1 to continue ";
        std::cin >> resume;
        std::cout << "\n\n\n";

    }

    else if (you == 0) {

        std::cout << "  " << cross_name << " begins to make " << pronoun2 << " way accross the bridge.\n"
            << "  With every step, you hear more creaking and popping.\n"
            << "  The bridge looks so unstable.\n"
            << "  The further " << pronoun << " goes, the more the bridge sways and the more dangerous it looks.\n"
            << "  Just past the halfway point, " << cross_name << " looks back to see you cheering in support.\n"
            << "  Just as " << pronoun << " turns to continue...\n"
            << "  SNAP!!!\n"
            << "  The floor falls out from under " << pronoun3 << "!\n"
            << "  " << cross_name << " frantically grabs at anything " << pronoun << " can get ahold of, but " << pronoun << " misses everything.\n"
            << "  Horrified, you sprint toward " << pronoun3 << ".\n"
            << "  You reach for " << pronoun2 << " hand...\n"
            << "  But you are too late!\n"
            << "  All you can do is look on in terror as " << pronoun << " falls into the river, is pulled under, and swept away\n"
            << "  After taking a moment to grasp the realities of what just happened, you make your way to the end of the bridge.\n";

        if (friends(theodore, francis, malachi) == 3) {

            std::cout << "  Followed shortly by your friends.\n\n\n";
            theodore = 0;

        }

        else if (friends(theodore, francis, malachi) == 2) {

            std::cout << "  Followed shortly by Malachi.\n\n\n";
            francis = 0;

        }

        else if (friends(theodore, francis, malachi) == 1) {

            std::cout << "\n\n";
            malachi = 0;

        }

        std::cout << "          Enter 1 to continue ";
        std::cin >> resume;
        std::cout << "\n\n\n";

    }

    // The Creature
    std::cout << "  You have made it safely accross the bridge.\n\n\n"
        << "  Before you are given a chance to take a breather and absorb everything that has happened, a giant figure approaches from a cavern.\n"
        << "  You look all around for something you could defend yourself with, or an escape route.\n"
        << "  You see no weapon and the only ways to go are past the figure or back accross the bridge.\n"
        << "  Neither of which are viable options.\n"
        << "  Before you can think of something, the figure reaches you.\n"
        << "  You look upon the creature in sheer wonderment.\n"
        << "  Standing eight feet tall, the creature appears to be a chimera of sorts.\n"
        << "  Though the creature appears to be a blend of feline, bovine, and mythical creatures not quite distinguisable, there is also something familiar...\n"
        << "  Something nearly human about it.\n"
        << "  In a deep, grumbling tone, the creature speaks.\n\n"
        << "  I have been watching you.\n"
        << "  You have the priveledge of being among the select few to find this island.\n"
        << "  Moreover, you are among an even fewer number to have made it this far, and lay eyes on me.\n"
        << "  You are but steps away from a treasure greater than anything you have ever dreamed.\n"
        << "  It lies just beyond the cavern behind me.\n"
        << "  All you need to do to proceed, is to answer my questions to my satisfaction.\n"
        << "  I must warn you however, if you fail to do so, the consequences will be severe.\n\n";

    if (friends(theodore, francis, malachi) > 1) {

        std::cout << "  Only one may participate.\n\n"
            << "  Almost as quickly as those final words left the creature's mouth, your friends vanish.\n\n";

    }

    else if (friends(theodore, francis, malachi) == 1) {

        std::cout << "  Only one may participate.\n\n"
            << "  Almost as quickly as those final words left the creature's mouth, your friend vanishes.\n\n";

    }

    std::cout << "  Abruptly, a barrier of blue flames surround you and the creature.\n\n\n";

    std::cout << "          Enter 1 to continue ";
    std::cin >> resume;
    std::cout << "\n\n\n";

    std::cout << "  " << user_name << "! Here is my first question... \n\n";

    // The Moral Trial
    std::cout << "  You have the opportunity to obtain unimaginable wealth, but never find love...\n\n"
        << "  Or, find love but never have wealth.\n\n"
        << "  Which do you desire?\n\n"
        << "  You think to yourself...\n"
        << "     Wealth would be great, but it would be hard to be happy without love.\n\n"
        << "  On the other hand...\n"
        << "      Love would be great, but it is hard to be happy when constantly stressing about money.\n\n";

    while (true) {

        std::cout << "          Enter 1 for love.\n\n"
            << "          Enter 2 for wealth.\n\n"
            << "          Answer: "; 

        std::cin >> dilemma_one;

        if (dilemma_one == 1 || dilemma_one == 2) {

            break;

        }

        else {

            std::cout << "          Please enter a valid numerical response: 1 or 2\n\n";
            continue;

        }

    }

    if (dilemma_one == 2) {

        dilemma_one = 0;

    }

    std::cout << "\n\n  My second...\n\n";

    std::cout << "  You have the opportunity to rid the world of famine, but become severly ill for the rest of your life...\n\n"
        << "  Or, become immortal, never aging or becoming ill.\n\n"
        << "  Which do you desire?\n\n"
        << "  You think to yourself, that's an easy one...\n"
        << "      Sacrificing my health to end hunger is the noble thing to do.\n\n"
        << "  On the other hand...\n"
        << "      If I was immortal, I could spend my life working to end famine and so many other things.\n\n"
        << "  Maybe it is not so straight forward...\n\n";

    while (true) {

        std::cout << "          Enter 1 to rid the world of famine.\n\n"
            << "          Enter 2 to become immortal.\n\n"
            << "          Answer: "; 

        std::cin >> dilemma_two;

        if (dilemma_two == 1 || dilemma_two == 2) {

            break;

        }

        else {

            std::cout << "          Please enter a valid numerical response: 1 or 2\n\n";
            continue;

        }

    }

    if (dilemma_two == 2) {

        dilemma_two = 0;

    }

    std::cout << "\n\n  My final question...";

    std::cout << "  You have the opportunity to gain all of the knowledge in the world\n\n"
        << "  Or, become the first leader of the entire world.\n\n"
        << "  Which do you desire?\n\n"
        << "  You think to yourself...\n"
        << "     This one is different than the others. Did he forget the conditions?\n\n"
        << "      He doesn't seem like the type to take questions.\n"
        << "      It may be better to not provoke him and just answer.\n\n";
    
    while (true) {

        std::cout << "          Enter 1 for knowledge.\n\n"
            << "          Enter 2 for power.\n\n"
            << "          Answer: ";

        std::cin >> dilemma_three;

        if (dilemma_three == 1 || dilemma_three == 2) {

            break;
            
        }

        else {

            std::cout << "          Please enter a valid numerical response: 1 or 2\n\n";
            continue;

        }

    }

    if (dilemma_three == 2) { 
        dilemma_three = 0;

    }

    std::cout << "\n\n  The second you answer the final question the barrier fades away.\n"
        << "  You brace and shade you head with your arms as strong swhirling wind comes blasting out of the cavern.\n"
        << "  The wind stops and you regain your composure.\n"
        << "  You check your surroundings and... nothing.\n"
        << "  The creature is gone and you are standing there alone and confused.\n"
        << "  You decide that you must have satisfied the creature with your answers.\n\n"
        << "  Why else would he just disappear and leave the path through the cavern completely clear?\n\n"
        << "  You assure yourself of this as you make your way to the cavern.\n"
        << "  It is so dark and cold...\n"
        << "  but, you must see what is there!\n"
        << "  As you enter the cavern, an intensly bright light appears.\n"
        << "  Before you know it, you are on the other side.\n"
        << "  It is as if you stepped right through some sort of portal.\n"
        << "  You look around you and freeze in astonishment at what you see...\n\n\n";

    std::cout << "          Enter 1 to continue ";
    std::cin >> resume;
    std::cout << "\n\n\n";

    if (dilemma_total(dilemma_one, dilemma_two, dilemma_three) == 3) {

        ending_one(friends(theodore, francis, malachi), user_name);

    }

    else if (dilemma_total(dilemma_one, dilemma_two, dilemma_three) == 2) {

        ending_two(dilemma_one, dilemma_two, dilemma_three, friends(theodore, francis, malachi), user_name);

    }

    else if (dilemma_total(dilemma_one, dilemma_two, dilemma_three) == 1) {

        ending_three(dilemma_one, dilemma_two, dilemma_three, user_name);

    }

    else if (dilemma_total(dilemma_one, dilemma_two, dilemma_three) == 0) {

        ending_four(user_name);

    }

    std::cout << "  ===============================================================================================================================================================\n\n\n"
        << "                                                                     FIN\n\n"
        << "  ===============================================================================================================================================================\n\n\n\n";

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
