<?php

function dynamic_backgrounds_admin_settings(&$form_state) {
	$form['dynamic_backgrounds_apply_rule'] = array(
		'#type' => 'textfield',
		'#title' => t('CSS Selection rule to apply background'),
		'#default_value' => variable_get('dynamic_bg_id', '')
	);
  $form['dynamic_backgrounds_preset'] = array(
		'#type' => 'textfield',
		'#title' => t('Type in the name of a preset to use if imagecache module is enabled'),
		'#default_value' => variable_get('dynamic_backgrounds_preset', '')
	);
  
  
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Submit')
	);

	return $form;
}

function dynamic_backgrounds_admin_settings_submit($form, &$form_state) {
	variable_set('dynamic_backgrounds_apply_rule', $form_state['values']['dynamic_backgrounds_apply_rule']);
  variable_set('dynamic_backgrounds_preset', $form_state['values']['dynamic_backgrounds_preset']);
}