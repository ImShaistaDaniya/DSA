#include <iostream>
#include <vector>

int maximumWealth(std::vector<std::vector<int>>& accounts){
    int numPeople = accounts.size();
    int maxWealth = 0;
    int richestPersonIndex = -1;

    for(int i=0; i<numPeople; i++){
        int wealth =0;

        for(int account : accounts[i]){
            wealth += account;
        }

        if(wealth >maxWealth){
            maxWealth = wealth;
            richestPersonIndex = i;
        }
    }
    return maxWealth;
}

int main() {
    int numPeople, numBanks, richestPersonIndex;
    std::cout <<"Enter the number of People : ";
    std::cin >> numPeople;
    std::cout << "Enter the number of banks/accounts per person: ";
    std::cin >> numBanks;

    std::vector<std::vector<int>> accounts(numPeople, std::vector<int>(numBanks));

    for(int i=0; i<numPeople; i++){
        std::cout<<"Enter account balance for person "<<(i+1)<<": ";
        for(int j=0; j<numBanks; j++){
            std::cin >>accounts[i][j];
        }
    }
    int maxWealth = maximumWealth(accounts);
    std::cout<<"The richest paerson has a wealth of "<< maxWealth<<"in total." <<std::endl;

    if (maxWealth >= 0){
        std::cout << "The richest person is person "<< ( richestPersonIndex + 1)<<"."<<std::endl;
    }
    return 0;
}