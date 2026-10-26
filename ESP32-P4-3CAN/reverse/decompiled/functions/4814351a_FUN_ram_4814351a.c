/* Firmware entry: 0x4814351a */

void FUN_ram_4814351a(int param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_4ff6e208 == param_1) {
    DAT_ram_4ff6e208 = *(undefined4 *)(param_1 + 0x34);
    FUN_ram_48139604(1);
    return;
  }
  iVar2 = DAT_ram_4ff6e208;
  if (DAT_ram_4ff6e208 != 0) {
    do {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar1 + 0x34);
      if (iVar2 == 0) goto LAB_ram_4814353a;
    } while (iVar2 != param_1);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  }
LAB_ram_4814353a:
  FUN_ram_48139604(1);
  return;
}


