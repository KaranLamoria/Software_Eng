#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() {
        cout << "Uploading photo or reel to Instagram." << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() {
        cout << "Uploading video to YouTube." << endl;
    }
};

int main() {
    InstagramUploader objI;
    YouTubeUploader objY;

    objI.uploadContent();
    objY.uploadContent();

    return 0;
}
