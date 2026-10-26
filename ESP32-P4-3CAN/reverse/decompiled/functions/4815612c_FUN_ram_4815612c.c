/* Firmware entry: 0x4815612c */

void FUN_ram_4815612c(int *param_1,char param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = *param_1;
  if ((char)param_1[4] == '\t') {
    if (*(code **)(param_1[1] + 0x20) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x20))();
    }
  }
  else {
    FUN_ram_4814268a(FUN_ram_48156044,param_1);
  }
  uVar1 = *(undefined1 *)(iVar4 + 6);
  uVar2 = *(byte *)((int)param_1 + 0x12) + 1;
  uVar3 = uVar2 & 0xff;
  *(ushort *)((int)param_1 + 0x12) = uVar2 * 0x100 | uVar3;
  *(undefined1 *)(param_1 + 5) = uVar1;
  FUN_ram_48155f4a(param_1,5,uVar3,param_1[2],(char)param_1[6]);
  if ((char)param_1[5] == '\0') {
    *(char *)(param_1 + 4) = param_2 + -2;
    if (*(code **)(param_1[1] + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4815619a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x28))(param_1);
      return;
    }
  }
  else {
    FUN_ram_4814268a(FUN_ram_48156044,param_1);
    FUN_ram_48142636((uint)*(byte *)(iVar4 + 4) * 1000,FUN_ram_48156044,param_1);
    *(char *)(param_1 + 4) = param_2;
    *(char *)(param_1 + 5) = (char)param_1[5] + -1;
  }
  return;
}


