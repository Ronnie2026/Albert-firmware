/* Firmware entry: 0x4802b98e */

int FUN_ram_4802b98e(int param_1,uint param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != 0) {
    puVar2 = param_3 + param_4;
    uVar1 = 1;
    do {
      if (uVar1 < param_2) {
        FUN_ram_4819adf6(param_1 + -1 + uVar1,&DAT_ram_481c3b70,*param_3);
      }
      param_3 = param_3 + 1;
      uVar1 = uVar1 + 2;
    } while (param_3 != puVar2);
  }
  return param_4 * 2 + 1;
}


