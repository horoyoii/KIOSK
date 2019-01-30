import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 600
    height: 400
    property alias button: button

    Button {
        id: button
        x: 0
        y: 0
        width: 461
        height: 277
        text: qsTr("주문하기")
    }



}
