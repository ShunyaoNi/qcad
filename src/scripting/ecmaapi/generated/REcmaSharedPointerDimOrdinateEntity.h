// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERDIMORDINATEENTITY_H
        #define RECMASHAREDPOINTERDIMORDINATEENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimOrdinateEntity.h"
            
            typedef QSharedPointer<RDimOrdinateEntity> RDimOrdinateEntityPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaSharedPointerDimOrdinateEntity {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRDimensionEntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLeaderEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLeaderEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDefiningPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDefiningPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMeasuringXAxis
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMeasuringYAxis
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isMeasuringXAxis
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimOrdinateEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimOrdinateEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    