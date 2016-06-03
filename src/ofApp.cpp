#include "ofMain.h"
#include "ofxEditor.h"
class ofApp : public ofBaseApp{
    
public:
    void setup();
    void draw();
    void keyPressed(int key);
    void windowResized(int w, int h);
    
    ofxEditor editor;
    ofxEditorColorScheme colorScheme;
};

void ofApp::setup(){

    ofBackground(0);
    colorScheme.setStringColor(255);
    ofxEditor::loadFont("font.ttf", 32);
    editor.openFile("text.lua");

}

void ofApp::draw(){

    editor.draw();
}

void ofApp::keyPressed(int key){
    
    editor.keyPressed(key);
}

void ofApp::windowResized(int w, int h) {
    
    editor.resize(w, h);
}


int main(){
    
    ofSetupOpenGL(970,640,OF_WINDOW);
    ofRunApp(new ofApp());
}

