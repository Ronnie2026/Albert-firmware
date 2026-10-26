/* Firmware entry: 0x481584f4 */

void FUN_ram_481584f4(int param_1,uint param_2,byte *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_2 & 0xf0) != 0) && (param_1 != 0)) &&
     (iVar11 = *(int *)((uint)DAT_ram_4ff47f80 * 4 + param_1 + 0xc4), iVar11 != 0)) {
    iVar13 = *(int *)(param_1 + 4);
    piVar12 = *(int **)(iVar11 + 8);
    if (iVar13 == DAT_ram_48236f9c) {
      if (*piVar12 != iVar13) {
        if ((*(int *)(iVar11 + 0x10) != 0) && (*(char *)(iVar11 + 0x44) == '\0')) {
          *(undefined1 *)(iVar11 + 0x44) = 1;
          FUN_ram_48142636(120000,FUN_ram_48157d72,iVar11);
        }
        if (((*(uint *)(iVar11 + 0x54) & 1) != 0) && (*(int *)(iVar11 + 0x3c) == 1)) {
          puVar15 = *(undefined4 **)(iVar11 + 8);
          *puVar15 = 0;
          puVar15[2] = 0;
          puVar15[1] = 0;
        }
      }
    }
    else {
      iVar14 = *(int *)(param_1 + 0x1c);
      if (((*piVar12 != iVar13) || (piVar12[1] != iVar14)) ||
         ((*(int *)(param_1 + 0x34) != piVar12[2] ||
          ((*(char **)(iVar11 + 0x20) != (char *)0x0 && (**(char **)(iVar11 + 0x20) != '\0')))))) {
        puVar19 = *(undefined1 **)(iVar11 + 0xc);
        iStack_38 = 0;
        iStack_34 = 0;
        iStack_30 = 0;
        uStack_2c = 0;
        uVar16 = *(undefined4 *)(iVar11 + 0x48);
        piVar12[2] = *(int *)(param_1 + 0x34);
        *piVar12 = iVar13;
        piVar12[1] = iVar14;
        iStack_3c = iVar11;
        iVar13 = FUN_ram_4ff4511a(piVar12,puVar19,0xc);
        if (iVar13 != 0) {
          uStack_2c = CONCAT31(uStack_2c._1_3_,1);
        }
        FUN_ram_48157d0e(iVar11,2);
        puVar10 = PTR_s_IP_EVENT_ram_481da530_ram_48237730;
        iStack_38 = *piVar12;
        iStack_34 = piVar12[1];
        iStack_30 = piVar12[2];
        iVar11 = *piVar12;
        uVar1 = *(undefined1 *)((int)piVar12 + 1);
        uVar2 = *(undefined1 *)((int)piVar12 + 2);
        uVar3 = *(undefined1 *)((int)piVar12 + 3);
        iVar13 = piVar12[1];
        uVar4 = *(undefined1 *)((int)piVar12 + 5);
        uVar5 = *(undefined1 *)((int)piVar12 + 6);
        uVar6 = *(undefined1 *)((int)piVar12 + 7);
        uVar7 = *(undefined1 *)((int)piVar12 + 9);
        uVar8 = *(undefined1 *)((int)piVar12 + 10);
        uVar9 = *(undefined1 *)((int)piVar12 + 0xb);
        puVar19[8] = (char)piVar12[2];
        puVar19[9] = uVar7;
        puVar19[10] = uVar8;
        *puVar19 = (char)iVar11;
        puVar19[1] = uVar1;
        puVar19[2] = uVar2;
        puVar19[3] = uVar3;
        puVar19[4] = (char)iVar13;
        puVar19[5] = uVar4;
        puVar19[6] = uVar5;
        puVar19[7] = uVar6;
        puVar19[0xb] = uVar9;
        iVar11 = FUN_ram_481a3b62(puVar10,uVar16,&iStack_3c,0x14,0);
        if (iVar11 != 0) {
          uVar16 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                           "E (%lu) %s: dhcpc cb: failed to post got ip event (%x)\n",uVar16,
                           "esp_netif_lwip",iVar11);
        }
      }
    }
  }
  if (((((param_2 & 0x200) != 0) && (param_3 != (byte *)0x0)) && ((param_3[1] & 0x10) == 0)) &&
     (((*(byte *)(param_1 + (char)*param_3 + 0x94) & 0x10) != 0 &&
      (iVar11 = *(int *)((uint)DAT_ram_4ff47f80 * 4 + param_1 + 0xc4), iVar11 != 0)))) {
    uStack_24 = (uint)*param_3;
    iVar13 = param_1 + uStack_24 * 0x18;
    iStack_38 = 0;
    iStack_34 = 0;
    iStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uVar1 = *(undefined1 *)(param_1 + uStack_24 * 0x18 + 0x5c);
    uVar20 = *(undefined4 *)(iVar13 + 0x4c);
    uVar18 = *(undefined4 *)(iVar13 + 0x50);
    uVar17 = *(undefined4 *)(iVar13 + 0x54);
    uVar16 = *(undefined4 *)(iVar13 + 0x58);
    iStack_3c = iVar11;
    if (((*(uint *)(iVar11 + 0x54) & 0x80) != 0) &&
       (((*(byte *)(*(int *)(iVar11 + 0x10) + 0xe7) & 1) != 0 && (*(char *)(iVar11 + 0x68) == '\0'))
       )) {
      *(undefined1 *)(iVar11 + 0x68) = 1;
      FUN_ram_48142636(40000,FUN_ram_48156c38,iVar11);
    }
    FUN_ram_48157d0e(iVar11,2);
    uStack_28 = CONCAT31(uStack_28._1_3_,uVar1);
    iStack_38 = uVar20;
    iStack_34 = uVar18;
    iStack_30 = uVar17;
    uStack_2c = uVar16;
    iVar11 = FUN_ram_481a3b62(PTR_s_IP_EVENT_ram_481da530_ram_48237730,3,&iStack_3c,0x1c,0);
    if (iVar11 != 0) {
      uVar16 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                       "E (%lu) %s: nd6 cb: failed to post IP_EVENT_GOT_IP6 (%x)\n",uVar16,
                       "esp_netif_lwip",iVar11);
    }
  }
  return;
}


