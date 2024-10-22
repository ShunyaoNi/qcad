// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERSHAPE_H
        #define RECMASHAREDPOINTERSHAPE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RShape.h"
            
            typedef QSharedPointer<RShape> RShapePointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerShape {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapeType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPointShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLineShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isArcShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isCircleShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEllipseShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFullEllipseShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPolylineShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSplineShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isTriangleShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isXLineShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isRayShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        cloneToSharedPointer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInterpolated
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestPointOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setZ
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equals
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDoubleProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoolProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        filterOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorFromEndpointTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArcReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointOnShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointCloud
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointWithDistanceToStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAtPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointAtPercent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAtPercent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersectsWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelfIntersectionPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDirected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSideOfPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistancesFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPolylines
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOrderedShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        order
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLL
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLA
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLC
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLT
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLS
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsLX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAA
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAC
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAT
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAS
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsAX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCC
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCS
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsCX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsEE
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsES
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsEX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsSX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsSS
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntersectionPointsXX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        castToExplodable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOffsetShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOffsetLines
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOffsetArcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReversedShapeList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        splitAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trim
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        roundCorners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        roundShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        xLineToRay
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rayToLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scaleArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        ellipseToArcCircleEllipse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getErrorCode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dump
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasProxy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RShape* getSelf(const QString& fName, QScriptContext* context)
    ;static RShape* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue toScriptValueEnumType(QScriptEngine* engine, const RShape::Type& value)
    ;static  void fromScriptValueEnumType(const QScriptValue& value, RShape::Type& out)
    ;};
    #endif
    