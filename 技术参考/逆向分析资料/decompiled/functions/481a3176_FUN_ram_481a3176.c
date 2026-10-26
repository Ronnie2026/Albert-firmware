/* Firmware entry: 0x481a3176 */

void FUN_ram_481a3176(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                     undefined4 *param_5)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (undefined1 *)0x0) {
    param_4 = 1;
    param_3 = &DAT_ram_481df390;
    param_2 = 0;
  }
  iVar1 = (**(code **)(PTR_DAT_ram_4823b50c_ram_4ff47fc0 + 0xe4))
                    (param_1,param_2,param_3,param_4,param_5,
                     *(code **)(PTR_DAT_ram_4823b50c_ram_4ff47fc0 + 0xe4));
  if (iVar1 == -1) {
    *param_5 = 0;
    *param_1 = 0x8a;
  }
  return;
}


