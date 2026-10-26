/* Firmware entry: 0x48158328 */

undefined4 FUN_ram_48158328(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar11 = *(int *)(param_1 + 0xc);
  piVar10 = *(int **)(param_1 + 0x10);
  if ((iVar11 != 0) && (piVar10 != (int *)0x0)) {
    if ((*(uint *)(iVar11 + 0x54) & 2) == 0) {
      if ((*(uint *)(iVar11 + 0x54) & 1) != 0) {
        if (*(int *)(iVar11 + 0x3c) != 2) {
          return 0x5007;
        }
        FUN_ram_48138d9c(0,0);
        FUN_ram_48138d9c(1,0);
      }
    }
    else if (*(int *)(iVar11 + 0x40) != 2) {
      return 0x5007;
    }
    piVar15 = *(int **)(iVar11 + 8);
    iVar13 = piVar10[1];
    iVar14 = piVar10[2];
    iVar12 = *(int *)(iVar11 + 0x10);
    *piVar15 = *piVar10;
    piVar15[1] = iVar13;
    piVar15[2] = iVar14;
    if ((((iVar12 != 0) && ((*(byte *)(iVar12 + 0xe7) & 1) != 0)) &&
        (FUN_ram_4813985e(iVar12,piVar10,piVar10 + 1,piVar10 + 2),
        (*(uint *)(iVar11 + 0x54) & 0x10) != 0)) && (*piVar10 != 0)) {
      iStack_20 = 0;
      uVar17 = *(undefined4 *)(iVar11 + 0x48);
      iStack_1c = 0;
      iStack_18 = 0;
      uStack_14 = 0;
      iStack_24 = iVar11;
      iVar12 = FUN_ram_4ff4511a(piVar10,*(undefined4 *)(iVar11 + 0xc),0xc);
      if (iVar12 != 0) {
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
      }
      FUN_ram_48157d0e(iVar11,2);
      puVar9 = PTR_s_IP_EVENT_ram_481da530_ram_48237730;
      iStack_20 = *piVar10;
      iStack_18 = piVar10[2];
      iStack_1c = piVar10[1];
      puVar16 = *(undefined1 **)(iVar11 + 0xc);
      iVar11 = *piVar10;
      uVar1 = *(undefined1 *)((int)piVar10 + 1);
      uVar2 = *(undefined1 *)((int)piVar10 + 2);
      uVar3 = *(undefined1 *)((int)piVar10 + 3);
      iVar12 = piVar10[1];
      uVar4 = *(undefined1 *)((int)piVar10 + 5);
      uVar5 = *(undefined1 *)((int)piVar10 + 6);
      uVar6 = *(undefined1 *)((int)piVar10 + 7);
      uVar7 = *(undefined1 *)((int)piVar10 + 10);
      uVar8 = *(undefined1 *)((int)piVar10 + 0xb);
      iVar13 = piVar10[2];
      puVar16[9] = *(undefined1 *)((int)piVar10 + 9);
      puVar16[10] = uVar7;
      puVar16[0xb] = uVar8;
      *puVar16 = (char)iVar11;
      puVar16[1] = uVar1;
      puVar16[2] = uVar2;
      puVar16[3] = uVar3;
      puVar16[4] = (char)iVar12;
      puVar16[5] = uVar4;
      puVar16[6] = uVar5;
      puVar16[7] = uVar6;
      puVar16[8] = (char)iVar13;
      iVar11 = FUN_ram_481a3b62(puVar9,uVar17,&iStack_24,0x14,0);
      if (iVar11 != 0) {
        uVar17 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                         "E (%lu) %s: set ip info: failed to post got ip event (%x)\n",uVar17,
                         "esp_netif_lwip",iVar11);
      }
    }
    return 0;
  }
  return 0x103;
}


