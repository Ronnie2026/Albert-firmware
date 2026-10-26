/* Firmware entry: 0x48132f46 */

void FUN_ram_48132f46(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("hw_random.c",0x62,"esp_fill_random","buf != NULL");
  }
  for (; param_2 != 0; param_2 = param_2 - uVar1) {
    auStack_24[0] = FUN_ram_4ff2d260();
    uVar1 = param_2;
    if (4 < param_2) {
      uVar1 = 4;
    }
    FUN_ram_4ff45158(param_1,auStack_24,uVar1);
    param_1 = param_1 + uVar1;
  }
  return;
}


