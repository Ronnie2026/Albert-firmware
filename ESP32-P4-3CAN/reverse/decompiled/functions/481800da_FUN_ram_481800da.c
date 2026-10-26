/* Firmware entry: 0x481800da */

undefined4 FUN_ram_481800da(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817fd64(param_1,(uint)((param_3 & 3) != 0) + (param_3 >> 2));
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4818178c(*param_1,*(undefined2 *)((int)param_1 + 6),param_2,param_3);
    return uVar2;
  }
  return 0xfffffff0;
}


