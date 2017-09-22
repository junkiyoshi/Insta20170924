#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofFill();
	ofSetColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw() {
	this->cam.begin();
	ofTranslate(ofVec3f(-ofGetWidth() / 2, 0, 0));

	float y;
	ofBeginShape();
	ofVertex(ofVec3f(0, -ofGetHeight() / 2, 0));
	for (int x = 0; x < ofGetWidth(); x += 1) {
		y = ofMap(ofNoise(x * 0.005 + ofGetFrameNum() * 0.025), 0, 1, -600, 600);
		y = (int)y / 80 * 80;
		ofVertex(ofVec3f(x, y, 0));
	}
	ofVertex(ofVec3f(ofGetWidth(), -ofGetHeight() / 2, 0));
	ofEndShape(true);

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
