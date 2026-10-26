/* Firmware entry: 0x48087dc6 */

undefined8 FUN_ram_48087dc6(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  undefined1 auStack_1c4 [8];
  undefined4 ***local_1bc [3];
  char cStack_1ad;
  undefined4 uStack_1ac;
  undefined4 local_19c [94];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0x14) + param_2 * 0x17c;
  cVar1 = *(char *)(iVar2 + 0x178);
  iVar16 = *(int *)(iVar2 + 0x170);
  puVar10 = local_19c;
  puVar13 = (undefined4 *)(iVar2 + 4);
  do {
    uVar14 = puVar13[1];
    uVar3 = puVar13[2];
    uVar4 = puVar13[3];
    uVar7 = puVar13[4];
    *puVar10 = *puVar13;
    puVar10[1] = uVar14;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    puVar10[4] = uVar7;
    puVar13 = puVar13 + 5;
    puVar10 = puVar10 + 5;
  } while (puVar13 != (undefined4 *)(iVar2 + 0x16c));
  *puVar10 = *puVar13;
  if (cVar1 == '\x01') {
    if (*(code **)(param_1 + 0xc) == (code *)0x0) {
      FUN_ram_48121fd6(auStack_1c4);
      iVar5 = FUN_ram_48121fee(auStack_1c4,"CANEXP01",0,0);
      if (iVar5 == 0) {
        FUN_ram_48121fe0(auStack_1c4);
        goto LAB_ram_48087ee6;
      }
      FUN_ram_4802a8a8(local_1bc,"p");
      FUN_ram_4802a928(&uStack_1ac,param_2,10);
      FUN_ram_4802ae48(local_1bc,&uStack_1ac);
      FUN_ram_4802a59e(&uStack_1ac);
      ppppuVar6 = local_1bc;
      if (-1 < cStack_1ad) {
        ppppuVar6 = (undefined4 ****)local_1bc[0];
      }
      iVar5 = FUN_ram_48122518(auStack_1c4,ppppuVar6,local_19c,0x16c);
      FUN_ram_48122142(auStack_1c4);
      FUN_ram_4802a59e(local_1bc);
      FUN_ram_48121fe0(auStack_1c4);
      uVar11 = (uint)(iVar5 == 0x16c);
    }
    else {
      uVar11 = (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 4),param_2,local_19c,0x16c);
    }
    if (uVar11 == 0) goto LAB_ram_48087ee6;
    cVar15 = *(char *)(iVar2 + 0x178);
LAB_ram_48087e98:
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    iVar5 = *(int *)(iVar2 + 0x170);
    if (iVar5 == iVar16) {
      if (cVar1 == cVar15) goto LAB_ram_48087eb0;
      bVar12 = cVar15 != '\0';
    }
    else {
LAB_ram_48087e44:
      bVar12 = cVar15 != '\0';
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (*(code **)(param_1 + 0x10) == (code *)0x0) {
        FUN_ram_48121fd6(auStack_1c4);
        iVar5 = FUN_ram_48121fee(auStack_1c4,"CANEXP01",0,0);
        if (iVar5 != 0) {
          FUN_ram_4802a8a8(local_1bc,"p");
          FUN_ram_4802a928(&uStack_1ac,param_2,10);
          FUN_ram_4802ae48(local_1bc,&uStack_1ac);
          FUN_ram_4802a59e(&uStack_1ac);
          ppppuVar6 = local_1bc;
          if (-1 < cStack_1ad) {
            ppppuVar6 = (undefined4 ****)local_1bc[0];
          }
          iVar5 = FUN_ram_48122736(auStack_1c4,ppppuVar6);
          if (iVar5 != 0) {
            ppppuVar6 = local_1bc;
            if (-1 < cStack_1ad) {
              ppppuVar6 = (undefined4 ****)local_1bc[0];
            }
            iVar5 = FUN_ram_48122164(auStack_1c4,ppppuVar6);
            if (iVar5 == 0) {
              FUN_ram_48122142(auStack_1c4);
              FUN_ram_4802a59e(local_1bc);
              FUN_ram_48121fe0(auStack_1c4);
              goto LAB_ram_48087ee6;
            }
          }
          FUN_ram_48122142(auStack_1c4);
          FUN_ram_4802a59e(local_1bc);
          FUN_ram_48121fe0(auStack_1c4);
          cVar15 = *(char *)(iVar2 + 0x178);
          goto LAB_ram_48087e98;
        }
        FUN_ram_48121fe0(auStack_1c4);
      }
      else {
        iVar5 = (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 4),param_2);
        if (iVar5 != 0) {
          cVar15 = *(char *)(iVar2 + 0x178);
          goto LAB_ram_48087e98;
        }
      }
LAB_ram_48087ee6:
      uVar8 = 0;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      uVar9 = 0x13;
      bVar12 = true;
      goto LAB_ram_48087e4c;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    iVar5 = *(int *)(iVar2 + 0x170);
    cVar15 = cVar1;
    if (iVar16 != iVar5) goto LAB_ram_48087e44;
LAB_ram_48087eb0:
    *(int *)(iVar2 + 0x174) = iVar16;
    uVar11 = *(uint *)(param_1 + 0x1c);
    *(undefined1 *)(iVar2 + 0x178) = 0;
    *(uint *)(param_1 + 0x1c) = ~(1 << (param_2 & 0x1f)) & uVar11;
    iVar5 = *(int *)(iVar2 + 0x170);
    bVar12 = false;
  }
  uVar8 = 1;
  uVar9 = 0;
  iVar16 = iVar5;
LAB_ram_48087e4c:
  uStack_1ac._0_3_ = CONCAT12(bVar12,CONCAT11(uVar9,uVar8));
  return CONCAT44(iVar16,uStack_1ac);
}


