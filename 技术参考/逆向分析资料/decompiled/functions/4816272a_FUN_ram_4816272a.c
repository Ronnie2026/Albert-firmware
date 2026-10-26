/* Firmware entry: 0x4816272a */

int FUN_ram_4816272a(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    if (*(int *)(param_2 + 0x30) != 0) goto LAB_ram_4816273a;
    iVar1 = 1000;
  }
  *(int *)(param_2 + 0x30) = iVar1;
LAB_ram_4816273a:
  iVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x2c);
  }
  return iVar1;
}


