import QtQuick 2.9
import QtQuick.Controls 2.2

Item {
    SwipeView {
        id: swipeView3
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1Form_3 {
            btn_bg_6.onClicked: {
                MainWindow.ShowBurgerInfoDetails("ShSt", 1);
}
            btn_bg_5.onClicked: {
                MainWindow.ShowBurgerInfoDetails("ShCh", 1);
            }
            btn_bg_4.onClicked: {
                MainWindow.ShowBurgerInfoDetails("ShBa", 1);
            }
            btn_bg_3.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Coke", 1);
            }
            btn_bg_2.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Chil", 1);
            }
            btn_bg_1.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Cafe", 1);
            }


        }

        Page2Form_3 {
            btn_bg_8.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Milk");
}
            btn_bg_7.onClicked: {
                MainWindow.ShowBurgerInfoDetails("Orange");
}

        }
    }


}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
