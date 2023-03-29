#include "profile.hpp"
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) {
    name = new_name;
    age = new_age;
    city = new_city;
    country = new_country;
    pronouns = new_pronouns;
}

std::string Profile::view_profile() {
    std::string profile_information = name + "\n" + std::to_string(age) + "\n" + city + "\n" + country + "\n" + pronouns + "\n";
    profile_information = profile_information + "Hobbies:" + "\n";
    for (std::string hobbie : hobbies) {
        profile_information = profile_information + hobbie + "\n";
    }

    return profile_information;
}

void Profile::add_hobby(std::string new_hobby) {
    hobbies.push_back(new_hobby);
};