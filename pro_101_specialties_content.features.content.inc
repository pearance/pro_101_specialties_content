<?php
/**
 * @file
 * pro_101_specialties_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_specialties_content_content_defaults() {
  $content = array();

  $content['specialty1'] = (object) array(
    'exported_path' => 'specialty/specialty-1',
    'title' => 'Specialty 1',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'specialty',
    'language' => 'und',
    'created' => '1335763319',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'specialty1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>Heading</h2>
      <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

  $content['specialty2'] = (object) array(
    'exported_path' => 'specialty/specialty-2',
    'title' => 'Specialty 2',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'specialty',
    'language' => 'und',
    'created' => '1335763371',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'specialty2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>Heading</h2>
      <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

  $content['specialty3'] = (object) array(
    'exported_path' => 'specialty/specialty-3',
    'title' => 'Specialty 3',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'specialty',
    'language' => 'und',
    'created' => '1335763403',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'specialty3',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>Heading</h2>
      <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
