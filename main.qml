import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import com.example.login 1.0
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("LOGIN")
    color:"skyblue"
    Column{
        spacing:10
        anchors.centerIn: parent

        TextField{
            id:usernameField
            placeholderText: "Username"
        }

        TextField{
            id:passwordField
            placeholderText: "Password"
            echoMode: TextInput.Password
        }

        Button{
            text: "Login"
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                if(loginmanager.login(usernameField.text,passwordField.text)){
                    console.log("Login Useful");
                }
                else{
                    console.log("Login Failed");
                }
                loginmanager.login(usernameField.text,passwordField.text)
            }
        }

    }
    Loginmanager{
        id:loginmanager
    }
}
