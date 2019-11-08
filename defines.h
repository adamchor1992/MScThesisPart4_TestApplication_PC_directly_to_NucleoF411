#pragma once

const int PACKET_SIZE = 20;
const int INIT_PACKETS_COUNT = 24;

/*Source/target field*/
enum class Source {SOURCE_TARGET1};

/*Module field*/
enum class ModuleID {MODULE1, MODULE2, MODULE3};

/*Function field*/
enum class Function {DATA_PACKET,
                     INIT_PACKET, DEINIT_PACKET,
                     ENABLE_PARAMETER_PACKET, DISABLE_PARAMETER_PACKET, SET_PARAMETER_PACKET,
                     SET_GRAPH_RANGE_MIN, SET_GRAPH_RANGE_MAX};

/*Parameter field*/
enum class Parameter { NULL_PARAMETER,
                       VOLTAGE_PARAMETER,
                       CURRENT_PARAMETER,
                       FREQUENCY_PARAMETER,
                       POWER_PARAMETER,
                       PARAMETER1,
                       PARAMETER2,
                       PARAMETER3,
                       PARAMETER4,
                       PARAMETER5,
                       PARAMETER6,
                       PARAMETER7,
                       PARAMETER8,
                       PARAMETER9,
                       PARAMETER10};

/*Sign field*/
enum class Sign {POSITIVE_SIGN, NEGATIVE_SIGN};

/*Length field*/
enum class Length {NO_PAYLOAD};
