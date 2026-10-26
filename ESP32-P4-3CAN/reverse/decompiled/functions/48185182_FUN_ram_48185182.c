/* Firmware entry: 0x48185182 */

undefined4 FUN_ram_48185182(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 3) {
      return 0xffffffd2;
    }
    pcVar1 = *(char **)(param_1 + 8);
    if (((*pcVar1 == '+') && (pcVar1[1] == 'e')) && (pcVar1[2] == 'n')) {
      *param_2 = 9;
      return 0;
    }
  }
  return 0xffffffd2;
}


