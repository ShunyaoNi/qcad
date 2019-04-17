// Auto generated by Testing Dashboard
// File        : scripts/Edit/Esc/Tests/EActionTest08.js
// Timestamp   : 2019-04-05 13:30:48
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function EActionTest08() {
    TdbTest.call(this, 'scripts/Edit/Esc/Tests/EActionTest08.js');
}

EActionTest08.prototype = new TdbTest();

EActionTest08.prototype.test00 = function() {
    qDebug('running EActionTest08.test00()...');
    this.setUp();
    this.importFile('scripts/Edit/Esc/Tests/data/image.dxf');
    // select image:
    var p = new RVector(0.745787, 119.212079);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    // resize keeping aspect ratio:
    var p = new RVector(256, 256);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    var p = new RVector(150, 300);
    this.sendMouseEventModelPos(QEvent.MouseMove, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, Qt.ShiftModifier);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, Qt.ShiftModifier);
    this.verifyDrawing('EActionTest08_000.dxf');
    this.tearDown();
    qDebug('finished EActionTest08.test00()');
};
