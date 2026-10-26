/* Firmware entry: 0x4802a79a */

undefined4 FUN_ram_4802a79a(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar2 = 0xe;
  }
  else {
    if (*param_1 == 0) goto LAB_ram_4802a7b4;
    uVar2 = param_1[1];
  }
  if (param_2 <= uVar2) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 1;
  }
LAB_ram_4802a7b4:
  iVar1 = FUN_ram_4802a5f0(param_1);
  if (iVar1 != 0) {
    if (*(char *)((int)param_1 + 0xf) < '\0') {
      if ((*(byte *)((int)param_1 + 0xf) & 0x7f) == 0) {
        *(undefined1 *)param_1 = 0;
      }
    }
    else if (param_1[2] == 0) {
      *(undefined1 *)*param_1 = 0;
    }
    return 1;
  }
  return 0;
}


