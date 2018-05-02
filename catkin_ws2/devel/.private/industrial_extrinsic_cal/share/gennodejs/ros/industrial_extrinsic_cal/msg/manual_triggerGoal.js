// Auto-generated. Do not edit!

// (in-package industrial_extrinsic_cal.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class manual_triggerGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.display_message = null;
    }
    else {
      if (initObj.hasOwnProperty('display_message')) {
        this.display_message = initObj.display_message
      }
      else {
        this.display_message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type manual_triggerGoal
    // Serialize message field [display_message]
    bufferOffset = _serializer.string(obj.display_message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type manual_triggerGoal
    let len;
    let data = new manual_triggerGoal(null);
    // Deserialize message field [display_message]
    data.display_message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.display_message.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'industrial_extrinsic_cal/manual_triggerGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fabc25e9031743adb6ffd8eade5239dd';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define the goal
    string display_message  # Specify which message displayed to user
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new manual_triggerGoal(null);
    if (msg.display_message !== undefined) {
      resolved.display_message = msg.display_message;
    }
    else {
      resolved.display_message = ''
    }

    return resolved;
    }
};

module.exports = manual_triggerGoal;
