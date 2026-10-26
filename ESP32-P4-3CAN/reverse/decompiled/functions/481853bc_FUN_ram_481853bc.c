/* Firmware entry: 0x481853bc */

int FUN_ram_481853bc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [48];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817b4f8(auStack_54);
  FUN_ram_481769e8(auStack_90);
  uVar1 = FUN_ram_4817697e(3);
  iVar2 = FUN_ram_48176b18(auStack_90,uVar1,0);
  if ((((iVar2 != 0) || (iVar2 = FUN_ram_48176bfe(auStack_90), iVar2 != 0)) ||
      (iVar2 = FUN_ram_48176c62(auStack_90,param_5,param_6), iVar2 != 0)) ||
     ((iVar2 = FUN_ram_48176c62(auStack_90,param_1,8), iVar2 != 0 ||
      (iVar2 = FUN_ram_48176caa(auStack_90,&uStack_84), iVar2 != 0)))) {
    FUN_ram_48176a1a(auStack_90);
    FUN_ram_48178af2(&uStack_84,0x10);
    goto LAB_ram_4818540c;
  }
  uStack_74 = uStack_84;
  uStack_70 = uStack_80;
  uStack_6c = uStack_7c;
  uStack_68 = uStack_78;
  if (param_2 == 0x10) {
    FUN_ram_48176a1a(auStack_90);
    FUN_ram_48178af2(&uStack_84,0x10);
  }
  else {
    iVar2 = FUN_ram_48176bfe();
    if (((iVar2 != 0) || (iVar2 = FUN_ram_48176c62(auStack_90,&uStack_84,0x10), iVar2 != 0)) ||
       (iVar2 = FUN_ram_48176c62(auStack_90,param_5,param_6), iVar2 != 0)) {
      FUN_ram_48176a1a(auStack_90);
      FUN_ram_48178af2(&uStack_84,0x10);
      goto LAB_ram_4818540c;
    }
    iVar2 = FUN_ram_48176c62(auStack_90,param_1,8);
    if ((iVar2 != 0) || (iVar2 = FUN_ram_48176caa(auStack_90,&uStack_84), iVar2 != 0)) {
      FUN_ram_48176a1a(auStack_90);
      FUN_ram_48178af2(&uStack_84,0x10);
      goto LAB_ram_4818540c;
    }
    uVar1 = 8;
    if (param_2 == 0x20) {
      uVar1 = 0x10;
    }
    FUN_ram_4ff45158(auStack_64,&uStack_84,uVar1);
    FUN_ram_48176a1a(auStack_90);
    FUN_ram_48178af2(&uStack_84,0x10);
  }
  iVar2 = FUN_ram_4817b524(auStack_54,&uStack_74,param_2 << 3);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4817b6a0(auStack_54,0,param_4,param_1,param_3,param_3);
  }
LAB_ram_4818540c:
  FUN_ram_4817b512(auStack_54);
  FUN_ram_48178af2(&uStack_74,param_2);
  return iVar2;
}


