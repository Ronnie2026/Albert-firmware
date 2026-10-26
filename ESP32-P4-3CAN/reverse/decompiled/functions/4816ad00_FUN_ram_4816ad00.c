/* Firmware entry: 0x4816ad00 */

undefined4 FUN_ram_4816ad00(int *param_1,int param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(char *)(param_1 + 2) = (char)param_2;
  *(undefined1 *)((int)param_1 + 9) = param_3;
  if (param_2 == 0) {
    *(undefined1 *)((int)param_1 + 10) = 2;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
  }
  *(undefined1 *)((int)param_1 + 0x76) = 0xff;
  *(undefined1 *)((int)param_1 + 0x77) = 0xff;
  *(undefined1 *)(param_1 + 0x1e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x79) = 0xff;
  *(undefined1 *)((int)param_1 + 0x7a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x7b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x75) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  param_1[0x1c] = 0x10;
  *param_1 = 0x303;
  param_1[1] = 0x303;
  if (param_4 == 2) {
    param_1[5] = (int)&DAT_ram_48238494;
    param_1[0x14] = (int)&DAT_ram_4823a6a0;
    param_1[0x18] = (int)&DAT_ram_48238464;
    param_1[0x19] = (int)&DAT_ram_4823845c;
    return 0;
  }
  iVar1 = FUN_ram_4816f180();
  param_1[5] = iVar1;
  param_1[0x14] = (int)&DAT_ram_4823a6b0;
  if ((param_1[1] == 0x303) && (*param_1 == 0x303)) {
    puVar2 = &DAT_ram_4823846c;
  }
  else {
    puVar2 = &DAT_ram_48238480;
  }
  param_1[0x18] = (int)puVar2;
  param_1[0x19] = (int)&DAT_ram_482384a0;
  return 0;
}


