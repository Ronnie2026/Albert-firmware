/* Firmware entry: 0x4818373e */

int FUN_ram_4818373e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [100];
  undefined1 auStack_b4 [136];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1[0x10];
  iVar3 = FUN_ram_4817697e(param_7);
  if (iVar3 == 0) {
    iVar1 = -0x4f80;
  }
  else {
    FUN_ram_4817fb86(auStack_120);
    FUN_ram_48184c28(auStack_118);
    uVar2 = iVar1 + 7U >> 3;
    iVar1 = FUN_ram_48180138(param_4,auStack_b4,uVar2);
    if ((((iVar1 == 0) &&
         (iVar1 = FUN_ram_48183558(param_1,auStack_120,param_5,param_6), iVar1 == 0)) &&
        (iVar1 = FUN_ram_48180138(auStack_120,auStack_b4 + uVar2,uVar2), iVar1 == 0)) &&
       (((iVar1 = FUN_ram_48184dfc(auStack_118,iVar3,auStack_b4,uVar2 << 1), iVar1 == 0 &&
         (iVar1 = -0x4f80, *param_1 != 9)) && (param_1[0xd] != 0)))) {
      iVar1 = FUN_ram_481835de(param_1,param_2,param_3,param_4,param_5,param_6,&LAB_ram_48184f8a,
                               auStack_118,param_8,param_9);
    }
    FUN_ram_48184f92(auStack_118);
    FUN_ram_4817fb90(auStack_120);
  }
  return iVar1;
}


