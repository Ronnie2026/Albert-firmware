/* Firmware entry: 0x481839be */

int FUN_ram_481839be(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,uint *param_7,int param_8,undefined4 param_9,
                    undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puStack_d0;
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [8];
  undefined1 auStack_bc [139];
  undefined1 auStack_31 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_8 == 0) {
    iVar3 = -0x4f80;
  }
  else {
    FUN_ram_4817fb86(auStack_cc);
    FUN_ram_4817fb86(auStack_c4);
    iVar1 = FUN_ram_4818373e(param_1,auStack_cc,auStack_c4,param_1 + 0x60,param_3,param_4,param_2,
                             param_8,param_9,param_10);
    iVar3 = iVar1;
    if (iVar1 == 0) {
      memset(auStack_bc,0,0x8b);
      puStack_d0 = auStack_31;
      iVar2 = FUN_ram_4817fade(&puStack_d0,auStack_bc,auStack_c4);
      iVar3 = iVar2;
      if ((-1 < iVar2) && (iVar3 = FUN_ram_4817fade(&puStack_d0,auStack_bc,auStack_cc), -1 < iVar3))
      {
        iVar2 = iVar2 + iVar3;
        iVar4 = FUN_ram_4817fa5a(&puStack_d0,auStack_bc,iVar2);
        iVar3 = iVar4;
        if ((-1 < iVar4) && (iVar3 = FUN_ram_4817fac0(&puStack_d0,auStack_bc,0x30), -1 < iVar3)) {
          uVar5 = iVar4 + iVar2 + iVar3;
          if (param_6 < uVar5) {
            iVar3 = -0x4f00;
          }
          else {
            FUN_ram_4ff45158(param_5,puStack_d0,uVar5);
            *param_7 = uVar5;
            iVar3 = iVar1;
          }
        }
      }
    }
    FUN_ram_4817fb90(auStack_cc);
    FUN_ram_4817fb90(auStack_c4);
  }
  return iVar3;
}


