/* Firmware entry: 0x481234f2 */

undefined4 FUN_ram_481234f2(undefined1 *param_1)

{
  int iVar1;
  char local_20 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x30) == 0) {
    if ((((*(int *)(param_1 + 0x34) == 0) ||
         (iVar1 = FUN_ram_480296ec(&DAT_ram_4ff6dc18,*(int *)(param_1 + 0x34),0,
                                   *(undefined4 *)(param_1 + 0x10),0x10), iVar1 == 0)) ||
        (*(int *)(param_1 + 0x34) == 0)) ||
       ((iVar1 = FUN_ram_4802970a(&DAT_ram_4ff6dc18,*(int *)(param_1 + 0x34),0,local_20,0x10),
        iVar1 == 0 || (local_20[0] != -0x17)))) {
      FUN_ram_48122b98(param_1);
      *param_1 = 3;
    }
    else {
      iVar1 = FUN_ram_4812d5fc(*(undefined4 *)(param_1 + 0x34));
      if (iVar1 == 0) goto LAB_ram_4812355a;
      FUN_ram_48122b98(param_1);
      *param_1 = 9;
    }
    return 0;
  }
LAB_ram_4812355a:
  FUN_ram_48122b98(param_1);
  return 1;
}


