/* Firmware entry: 0x48183c50 */

int FUN_ram_48183c50(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined1 auStack_70 [76];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar7 = 0x101;
  do {
    if (iVar5 == 0) {
      iVar5 = -0x40;
      goto LAB_ram_48183cc4;
    }
    while( true ) {
      iVar5 = FUN_ram_48183b8c(param_1);
      if (iVar5 != 0) goto LAB_ram_48183cc4;
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 < 1) break;
      puVar8 = (uint *)(param_1 + 0x1c);
      bVar1 = true;
      uVar6 = 0;
      iVar2 = 0;
      puVar4 = puVar8;
      do {
        iVar2 = iVar2 + 1;
        bVar1 = (bool)(bVar1 & puVar4[1] <= *puVar4);
        if (puVar4[2] == 1) {
          uVar6 = uVar6 + *puVar4;
        }
        puVar4 = puVar4 + 5;
      } while (iVar5 != iVar2);
      if ((bVar1) && (0x3f < uVar6)) {
        memset(auStack_70,0,0x40);
        iVar5 = FUN_ram_48176caa(param_1,auStack_70);
        if (iVar5 == 0) {
          FUN_ram_48176a1a(param_1);
          FUN_ram_481769e8(param_1);
          uVar3 = FUN_ram_4817697e(0xb);
          iVar5 = FUN_ram_48176b18(param_1,uVar3,0);
          if (((iVar5 == 0) && (iVar5 = FUN_ram_48176bfe(param_1), iVar5 == 0)) &&
             (iVar5 = FUN_ram_48176c62(param_1,auStack_70,0x40), iVar5 == 0)) {
            uVar3 = FUN_ram_4817697e(0xb);
            iVar5 = FUN_ram_48176cf2(uVar3,auStack_70,0x40,auStack_70);
            if (iVar5 == 0) {
              iVar7 = *(int *)(param_1 + 0x10);
              iVar2 = 0;
              if (0 < iVar7) {
                do {
                  *puVar8 = 0;
                  iVar2 = iVar2 + 1;
                  puVar8 = puVar8 + 5;
                } while (iVar2 != iVar7);
              }
              FUN_ram_4ff45158(param_2,auStack_70,param_3);
            }
          }
        }
        goto LAB_ram_48183cc4;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) goto LAB_ram_48183cbe;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
LAB_ram_48183cbe:
  iVar5 = -0x3c;
LAB_ram_48183cc4:
  FUN_ram_48178af2(auStack_70,0x40);
  return iVar5;
}


