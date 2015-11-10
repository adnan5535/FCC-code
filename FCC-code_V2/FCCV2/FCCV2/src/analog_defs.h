/*
 * analog_defs.h
 *
 * Created: 2015-11-09 6:22:20 PM
 *  Author: Reegan
 */ 


#ifndef ANALOG_DEFS_H_
#define ANALOG_DEFS_H_


//Analog Inputs
#define AMBTEMP4 AVR32_ADCIN14_PIN
#define AMBTEMP3 AVR32_ADCIN13_PIN
#define AMBTEMP2 AVR32_ADCIN12_PIN
#define AMBTEMP1 AVR32_ADCIN11_PIN
#define FCTEMP2 AVR32_ADCIN10_PIN
#define FCTEMP1 AVR32_ADCIN9_PIN
#define MFLOW AVR32_ADCIN8_PIN
#define FCVOLT AVR32_ADCIN7_PIN
#define CAPVOLT AVR32_ADCIN6_PIN
#define FCCURR AVR32_ADCIN5_PIN
#define CAPCURR AVR32_ADCIN4_PIN
#define FCPRES AVR32_ADCIN3_PIN
//adcin2 unused
#define TANKPRES AVR32_ADCIN1_PIN
//adcin0 unused

//Analog GPIO MAP
static const gpio_map_t ADCIFA_GPIO_MAP = {
	{AMBTEMP4,AVR32_ADCIN14_FUNCTION},
	{AMBTEMP3,AVR32_ADCIN13_FUNCTION},
	{AMBTEMP2,AVR32_ADCIN12_FUNCTION},
	{AMBTEMP1,AVR32_ADCIN11_FUNCTION},
	{FCTEMP2,AVR32_ADCIN10_FUNCTION},
	{FCTEMP1,AVR32_ADCIN9_FUNCTION},
	{MFLOW,AVR32_ADCIN8_FUNCTION},
	{FCVOLT,AVR32_ADCIN7_FUNCTION},
	{CAPVOLT,AVR32_ADCIN6_FUNCTION},
	{FCCURR,AVR32_ADCIN5_FUNCTION},
	{CAPCURR,AVR32_ADCIN4_FUNCTION},
	{FCPRES,AVR32_ADCIN3_FUNCTION},
	{TANKPRES,AVR32_ADCIN1_FUNCTION}
};

//ADC settings
adcifa_opt_t adcifa_opt = {
	.frequency                = 10000,  // ADC frequency (Hz)
	.reference_source         = ADCIFA_REF1V, // Reference Source
	.sample_and_hold_disable  = 0,    // Disable Sample and Hold Time
	.single_sequencer_mode    = 0,    // Single Sequencer Mode
	.free_running_mode_enable = 0,    // Free Running Mode
	.sleep_mode_enable        = 0     // Sleep Mode
};

adcifa_sequencer_opt_t adcifa_sequence_opt = {
	.convnb               = 7, // Number of sequence
	.resolution           = ADCIFA_SRES_12B,         // Resolution selection
	.trigger_selection    = ADCIFA_TRGSEL_SOFT,      // Trigger selection
	.start_of_conversion  = ADCIFA_SOCB_ALLSEQ,      // Conversion Management
	.half_word_adjustment = ADCIFA_HWLA_NOADJ,       // Half word Adjustment
	.software_acknowledge = ADCIFA_SA_NO_EOS_SOFTACK // Software Acknowledge
};

adcifa_sequencer_conversion_opt_t adcifa_sequence_conversion_option_0[7] =
{
	{
		.channel_p = AVR32_ADCIFA_INP_GNDANA,   // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_ADCIN8,   // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_GNDANA,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_ADCIN9,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_GNDANA,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_ADCIN10,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_GNDANA,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_ADCIN11,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_GNDANA,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_ADCIN12,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_GNDANA,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_ADCIN13,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_GNDANA,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_ADCIN14,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
};

adcifa_sequencer_conversion_opt_t adcifa_sequence_conversion_option_1[6] =
{
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN1,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN3,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN4,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN5,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN6,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN7,             // Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,             // Negative Channel
		.gain      = ADCIFA_SHG_1                     // Gain of the conversion
	},
};




#endif /* ANALOG_DEFS_H_ */