/* Firmware entry: 0x48157366 */

undefined4 FUN_ram_48157366(int param_1)

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
  undefined1 uVar10;
  undefined1 uVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  int *piVar23;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar12 = *(int **)(param_1 + 0x10);
  if (((piVar12 == (int *)0x0) || (*(int *)(*piVar12 + 0x18) == 0)) ||
     (iVar13 = FUN_ram_48156848(), iVar13 != 0)) {
    uVar22 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                     "E (%lu) %s: %s: Failed to configure netif with config=%p (config or if_key is NULL or duplicate key)\n"
                     ,uVar22,"esp_netif_lwip","esp_netif_new_api",piVar12);
    return 0xffffffff;
  }
  if ((*(uint *)*piVar12 & 3) == 3) {
    uVar22 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                     "E (%lu) %s: %s: Failed to configure netif with config=%p (DHCP server and client cannot be configured together)\n"
                     ,uVar22,"esp_netif_lwip","esp_netif_new_api",piVar12);
    return 0xffffffff;
  }
  puVar14 = (undefined1 *)FUN_ram_4ff45080(1,0x6c);
  if (puVar14 == (undefined1 *)0x0) {
    uVar22 = FUN_ram_4ff44d14();
    uVar17 = FUN_ram_481a704c();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                     "E (%lu) %s: Failed to allocate %lu bytes (free heap size %lu)\n",uVar22,
                     "esp_netif_lwip",0x6c,uVar17);
    return 0xffffffff;
  }
  iVar13 = FUN_ram_4ff45080(1,0xc);
  if (iVar13 == 0) {
    uVar22 = FUN_ram_4ff44d14();
    uVar17 = FUN_ram_481a704c();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                     "E (%lu) %s: Failed to allocate %lu bytes (free heap size %lu)\n",uVar22,
                     "esp_netif_lwip",0xc,uVar17);
    thunk_FUN_ram_4ff209c6(puVar14);
    return 0xffffffff;
  }
  *(int *)(puVar14 + 8) = iVar13;
  iVar13 = FUN_ram_4ff45080(1,0xc);
  if (iVar13 == 0) {
    uVar22 = FUN_ram_4ff44d14();
    uVar17 = FUN_ram_481a704c();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                     "E (%lu) %s: Failed to allocate %lu bytes (free heap size %lu)\n",uVar22,
                     "esp_netif_lwip",0xc,uVar17);
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(puVar14 + 8));
    thunk_FUN_ram_4ff209c6(puVar14);
    return 0xffffffff;
  }
  *(int *)(puVar14 + 0xc) = iVar13;
  iVar13 = FUN_ram_4ff45080(1,0x108);
  if (iVar13 == 0) {
    uVar22 = FUN_ram_4ff44d14();
    uVar17 = FUN_ram_481a704c();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                     "E (%lu) %s: Failed to allocate %lu bytes (free heap size %lu)\n",uVar22,
                     "esp_netif_lwip",0x108,uVar17);
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(puVar14 + 0xc));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(puVar14 + 8));
    thunk_FUN_ram_4ff209c6(puVar14);
    return 0xffffffff;
  }
  *(int *)(puVar14 + 0x10) = iVar13;
  FUN_ram_48156740(puVar14);
  puVar19 = (uint *)*piVar12;
  if ((*puVar19 & 2) == 0) {
LAB_ram_48157408:
    if (piVar12[2] == 0) goto LAB_ram_481575d0;
    uVar21 = puVar19[2];
    uVar1 = *(undefined1 *)((int)puVar19 + 5);
    uVar2 = *(undefined1 *)((int)puVar19 + 6);
    uVar3 = *(undefined1 *)((int)puVar19 + 7);
    uVar4 = *(undefined1 *)((int)puVar19 + 9);
    *puVar14 = (char)puVar19[1];
    puVar14[1] = uVar1;
    puVar14[5] = uVar4;
    puVar14[2] = uVar2;
    puVar14[3] = uVar3;
    puVar14[4] = (char)uVar21;
    puVar20 = *(undefined4 **)(puVar14 + 8);
    puVar18 = *(undefined1 **)(*piVar12 + 0xc);
    if (puVar18 == (undefined1 *)0x0) {
      *puVar20 = 0;
      puVar20[2] = 0;
      puVar20[1] = 0;
    }
    else {
      uVar1 = puVar18[1];
      uVar2 = puVar18[2];
      uVar3 = puVar18[3];
      uVar4 = puVar18[4];
      uVar5 = puVar18[5];
      uVar6 = puVar18[6];
      uVar7 = puVar18[7];
      uVar8 = puVar18[8];
      uVar9 = puVar18[9];
      uVar10 = puVar18[10];
      uVar11 = puVar18[0xb];
      *(undefined1 *)puVar20 = *puVar18;
      *(undefined1 *)((int)puVar20 + 1) = uVar1;
      *(undefined1 *)((int)puVar20 + 2) = uVar2;
      *(undefined1 *)((int)puVar20 + 3) = uVar3;
      *(undefined1 *)(puVar20 + 1) = uVar4;
      *(undefined1 *)((int)puVar20 + 5) = uVar5;
      *(undefined1 *)((int)puVar20 + 6) = uVar6;
      *(undefined1 *)((int)puVar20 + 7) = uVar7;
      *(undefined1 *)(puVar20 + 2) = uVar8;
      *(undefined1 *)((int)puVar20 + 9) = uVar9;
      *(undefined1 *)((int)puVar20 + 10) = uVar10;
      *(undefined1 *)((int)puVar20 + 0xb) = uVar11;
      puVar20 = *(undefined4 **)(puVar14 + 8);
    }
    uVar1 = *(undefined1 *)((int)puVar20 + 1);
    uVar2 = *(undefined1 *)((int)puVar20 + 2);
    uVar3 = *(undefined1 *)((int)puVar20 + 3);
    uVar4 = *(undefined1 *)(puVar20 + 1);
    uVar5 = *(undefined1 *)((int)puVar20 + 5);
    uVar6 = *(undefined1 *)((int)puVar20 + 6);
    uVar7 = *(undefined1 *)((int)puVar20 + 7);
    uVar8 = *(undefined1 *)(puVar20 + 2);
    uVar9 = *(undefined1 *)((int)puVar20 + 9);
    uVar10 = *(undefined1 *)((int)puVar20 + 10);
    puVar18 = *(undefined1 **)(puVar14 + 0xc);
    uVar11 = *(undefined1 *)((int)puVar20 + 0xb);
    *puVar18 = *(undefined1 *)puVar20;
    puVar18[1] = uVar1;
    puVar18[2] = uVar2;
    puVar18[3] = uVar3;
    puVar18[4] = uVar4;
    puVar18[5] = uVar5;
    puVar18[6] = uVar6;
    puVar18[7] = uVar7;
    puVar18[8] = uVar8;
    puVar18[9] = uVar9;
    puVar18[10] = uVar10;
    puVar18[0xb] = uVar11;
    puVar19 = (uint *)*piVar12;
    uVar21 = puVar19[4];
    *(uint *)(puVar14 + 0x4c) = puVar19[5];
    *(uint *)(puVar14 + 0x48) = uVar21;
    uVar21 = *puVar19;
    *(uint *)(puVar14 + 0x54) = uVar21;
    if ((char *)puVar19[6] != (char *)0x0) {
      pcVar16 = strdup((char *)puVar19[6]);
      *(char **)(puVar14 + 0x5c) = pcVar16;
    }
    if ((char *)puVar19[7] != (char *)0x0) {
      pcVar16 = strdup((char *)puVar19[7]);
      *(char **)(puVar14 + 0x60) = pcVar16;
    }
    if (puVar19[8] != 0) {
      *(uint *)(puVar14 + 100) = puVar19[8];
    }
    piVar23 = (int *)piVar12[2];
    if ((uVar21 & 0x20) == 0) {
      if (*piVar23 != 0) {
        *(int *)(puVar14 + 0x14) = *piVar23;
      }
      if (piVar23[1] != 0) {
        *(int *)(puVar14 + 0x18) = piVar23[1];
      }
      iVar15 = *(int *)(puVar14 + 0x10);
LAB_ram_4815756e:
      piVar12 = (int *)piVar12[1];
      *(int *)(puVar14 + 0x1c) = iVar15;
      if (piVar12 != (int *)0x0) {
        if (*piVar12 != 0) {
          *(int *)(puVar14 + 0x28) = *piVar12;
        }
        if (piVar12[1] != 0) {
          *(int *)(puVar14 + 0x2c) = piVar12[1];
        }
        if (piVar12[2] != 0) {
          *(int *)(puVar14 + 0x30) = piVar12[2];
        }
        if (piVar12[3] != 0) {
          *(int *)(puVar14 + 0x34) = piVar12[3];
        }
        if (piVar12[4] != 0) {
          *(int *)(puVar14 + 0x38) = piVar12[4];
        }
      }
      iVar15 = DAT_ram_4ff6e25c;
      *(undefined1 **)(iVar13 + (uint)DAT_ram_4ff47f80 * 4 + 0xc4) = puVar14;
      if (iVar15 == 0) {
        FUN_ram_4813a8b2(&DAT_ram_4ff6e25c,FUN_ram_481584f4);
      }
      **(undefined4 **)(param_1 + 0xc) = puVar14;
      return 0;
    }
    iVar15 = FUN_ram_48159b08(puVar14,piVar23);
    *(int *)(puVar14 + 0x20) = iVar15;
    if (iVar15 != 0) {
      *(int *)(puVar14 + 0x18) = *piVar23;
      goto LAB_ram_4815756e;
    }
    uVar22 = 0x5009;
  }
  else {
    iVar15 = FUN_ram_4818c9e8();
    *(int *)(puVar14 + 0x24) = iVar15;
    if (iVar15 == 0) {
      uVar22 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: Failed to create dhcp server handle\n",uVar22
                       ,"esp_netif_lwip");
      goto LAB_ram_48157600;
    }
    puVar19 = (uint *)*piVar12;
    if (puVar19 != (uint *)0x0) goto LAB_ram_48157408;
LAB_ram_481575d0:
    uVar22 = 0x5001;
  }
  uVar17 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                   "E (%lu) %s: Initial configuration of esp_netif failed with %d\n",uVar17,
                   "esp_netif_lwip",uVar22);
LAB_ram_48157600:
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  puStack_28 = puVar14;
  FUN_ram_48157274(&uStack_34);
  return 0xffffffff;
}


