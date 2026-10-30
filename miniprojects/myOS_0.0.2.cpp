#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>


using namespace std;

struct foldersesc{
string name;
foldersesc* parent = nullptr;
map<string , foldersesc*> children;
};
foldersesc root{"|" , nullptr};
foldersesc* current = &root;


void vect(vector<string> predmets) {
for(auto p : predmets) {
cout << "-- " << p << endl;
}
}
void cels(const string& filename) {

vector<string> lines_vect1;
cout << "        ===CELS TEXT EDITOR===\n\n";
vector<string> fols;
string curentline;
while(true) {
cout << ":>>";
getline(cin, curentline);
if(curentline == ":wq") {
ofstream file(filename);
for(const auto& x : lines_vect1 ) {
file << x << endl;
}
file.close();
}
else {
lines_vect1.push_back(curentline);
}
}
}
void calulator() {
double num1 , num2;
char symb;
    cin >> num1 >> symb >> num2;
    if(symb == '+') {
        cout << "result for add: " << num1 + num2 << endl;

    }

    else if(symb == '-') {
        cout << "result for minus: " << num1 - num2 << endl;

    }

    else if(symb == '*') {\
        cout << "result for multiply: " << num1 * num2 << endl;

    }

    else if(symb == '/') {
        cout << "result for divide: " << num1 / num2 << endl;
        if(num1 == 0 || num2 == 0) {
            cout << "[ERROR]: divide not work with '0'" << endl;
        }
    } 
}
void nio() {
    
    #define RESET   "\033[0m"
    #define GREEN   "\033[1;32m"
    #define CYAN    "\033[1;36m"
    #define YELLOW  "\033[1;33m"
    #define BLUE    "\033[1;34m"
    #define MAGENTA "\033[1;35m"

    std::cout << CYAN << "  ████████  ████████ " << GREEN << "  root" << RESET << "@" << GREEN << "tfos\n";
    std::cout << CYAN << "     ██     ██       " << RESET << "  -------------\n";
    std::cout << CYAN << "     ██     ██████   " << YELLOW << "  OS: " << RESET << "T-FOS v0.0.3 (Terminal-Friendly)\n";
    std::cout << CYAN << "     ██     ██       " << YELLOW << "  Shell: " << RESET << "TH-Shell\n";
    std::cout << CYAN << "     ██     ██       " << YELLOW << "  Host: " << RESET << "emulator\n";
    std::cout << CYAN << "                     " << YELLOW << "  Architecture: " << RESET << "C++\n\n";
    
    
    std::cout << "  " << "███" << GREEN << "███" << YELLOW << "███" << BLUE << "███" << MAGENTA << "███" << CYAN << "███" << RESET << "\n\n";
}

void TF_os_main() {
    string login = "user"; 
    string password;
    string command;
    string dop_comm;
    string shell = "TH-Shell(C++architecture)";
    string namefold;
    vector<string> folders {
        "root",
            "hda1/TSD"
    };
    fstream File("dates.txt");

    while (true) {
        
        cout << "\033[1;32m" << login << "@T-FOS\033[0m[\033[1;34mtyping\033[0m]:> ";
        
        if (!(cin >> command)) {
            break; 
        }

        
        if (command == "reg") {
            cin >> dop_comm;
            if (dop_comm == "-u") {
                cin >> login >> password;
                cout << "[SUCCESS] User " << login << " registered successfully!\n";
            } else {
                cout << "[ERROR] Invalid reg argument. Use: reg -u <user> <pass>\n";
            }
        }
    
        else if (command == "niofh") {
            nio();
        }
        
        else if (command == "-help-") {
            cout << "--- T-FOS Help Menu ---\n";
            cout << "  niofh        - show system info & logo\n";
            cout << "  reg -u u p   - register new user\n";
            cout << "  folcr <name> - create folder\n";
            cout << "  lsc          - list all folders\n";
            cout << "  whoa -u      - show current user\n";
            cout << "  whoa -t      - show shell type\n";
            cout << "  exit / quit  - exit T-FOS\n";
            cout << "     RELEASE 0.0.3 ADDS:\n";
            cout << "  retyping the folcr function\n";
            cout << "cds --          - come you in the system tree\n";
            cout << "cds 'folder'    - come you in the your folder \n";
            cout << "calc 'n1' 'math' 'n2'  - calculator\n";
            cout << "pong 'num'      - the sound\n";
        }

        else if (command == "folcr") {
            ;
            ;
            string folder_name;
            cin >> folder_name;
            ;
            folders.push_back(folder_name);
            ;
            foldersesc* newFolder = new foldersesc{folder_name , current};
            current->children[folder_name] = newFolder;
            ;
            ;
            ;

        }
        
        else if (command == "lsc") {
            cout << " ||folder list|| " << endl;
            
                for(auto const& [name , folder_ptr] : current->children) {
                    cout << "-->" << GREEN  << name << RESET << endl;
                }
            
        }
        else if(command == "cds") {
            string target;
            cin >> target;

            if(target == "--") {
                if(current->parent != nullptr) {
                    current = current->parent;
                    
                }
                else {
                    cout << "TH-Shell::you are in system tree" << endl;
                }
                }
            else if(current->children.count(target)) {
                current = current->children[target];
            }
            else if(target == ".") {

            }
            else if(target == "-h") {
                cout << " |-----cds help----\n";
                cout << " | cds 'folder'    - come your in your folder\n";
                cout << " | cds --          - come you in the dydtem tree\n";
                cout << " | cds -h          - see cds functions\n";
                cout << " |-----------------\n";
            }
            else if(target == "hda/TSD" || target == "root") {
        
    cout << "[ERROR:]:you are dont the THAdmin, this is system files\n"; 
            }
            else {
                cout << "TH-Shell::incorrect command: '" << target << "' please for help type: cds -h" << endl;
                cout << "cds::incorrect command: '" << target << "' please for help type: cds -h" << endl;
            }
        }
        
        else if (command == "whoa") {
            cin >> dop_comm;
            if (dop_comm == "-u") {
                cout << "Current user: " << login << "\n";
            } else if (dop_comm == "-t") {
                cout << "Current shell: " << shell << "\n";
            } else {
                cout << "[ERROR] Unknown option for whoa. Use -u or -t\n";
            }
        }
        
        else if (command == "exit" || command == "quit") {
            cout << "Shutting down T-FOS... Goodbye!\n";
            exit(0);
        }
        
        else if(command == "calc") {
            calulator();

        }
        else if(command == "pong") {
            int numsound;
            cin >> numsound;
            if(numsound == 1){
        int sound1 = system("paplay /usr/share/sounds/freedesktop/stereo/message-new-instant.oga");
            }
            else if(numsound == 2){
                int sound = system("paplay /usr/share/sounds/gnome/default/alarms/crossing-bell.oga");
            }
            else {
                cout << "[ERROR]:Invalid sound number" << endl;
            }
        }

        else if(command == "cels") {
            string name;
            cin >> name;
            cout << "===T-FOS cels text redactor" << endl;
            cels(name);
        }
        
        else {
            cout << "[ERROR] Command not found: '" << command << "'. Type -help- for info.\n";
        }


        
    }
};

int main() {


    cout << "=== Welcome to T-FOS v0.0.3 (C++ Core) ===\n\n";
    TF_os_main();

    return 0;
}




