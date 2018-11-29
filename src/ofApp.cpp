#include "ofApp.h"
#include <random>
#include <vector>

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
X = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};// set of x-coordinates for jewel
Y = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //set of y-coordinates for jewel
/**
	std::random_device seed; //U.R.B.G. (Uniformed Random Bit Genorator)
	std::mt19937 mt_Eng(seed()); //P.R.N.G. (Psuedo Random Number Generator) -Mersenne Twister-
	std::uniform_int_distribution <int> uniformX(0,1200); // (min, max) distribution: UNIFORMED
	std::uniform_int_distribution <int> uniformY(0,970);

	for (int i = 0; i < 20; i++){
			X[i] = uniformX(mt_Eng);
			Y[i] = uniformY(mt_Eng);
	}


	//debug
		cout << endl << "(X,Y) cordinates -Uniform Distribution-:" << endl << endl;
	for (int i = 0; i < 20; i++){
		cout << X[i] << "," << Y[i] << endl;
		}
*/

			
	std::random_device seed;//U.R.B.G. (Uniformed Random Bit Genorator)
	std::mt19937 mt_Eng(seed()); //P.R.N.G. (Psuedo Random Number Generator) -Mersenne Twister-
	std::normal_distribution<float> normalX(1000,15); //(mean, standard deviation) distribution: NORMAL
	std::normal_distribution<float> normalY(800,15);

		for (int i = 0; i < 20; i++){
			X[i] = normalX(mt_Eng);
			Y[i] = normalY(mt_Eng);
		}

		//debug
		cout << endl << "(X,Y) cordinates -Normal Distribution-:" << endl << endl;
	for (int i = 0; i < 20; i++){
		cout << X[i] << "," << Y[i] << endl;
		}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
   
 }
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
