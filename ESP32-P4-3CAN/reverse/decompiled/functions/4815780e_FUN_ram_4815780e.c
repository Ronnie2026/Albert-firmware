/* Firmware entry: 0x4815780e */

undefined4 FUN_ram_4815780e(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0x10);
  iVar10 = *(int *)(param_1 + 0xc);
  pbVar2 = (byte *)FUN_ram_4818ca52(*(undefined4 *)(iVar10 + 0x24),(char)piVar1[1],piVar1[3]);
  if (pbVar2 == (byte *)0x0) {
    return 0x5001;
  }
  pbVar11 = (byte *)piVar1[2];
  if (pbVar11 == (byte *)0x0) {
    return 0x5001;
  }
  if (*piVar1 != 2) {
    if (*piVar1 != 1) {
      return 0x5001;
    }
    if (*(int *)(iVar10 + 0x40) == 1) {
      return 0x5004;
    }
    uVar8 = piVar1[1];
    if (uVar8 == 0x32) {
      if (*pbVar11 != 0) {
        iVar9 = *(int *)(iVar10 + 0x10);
        if ((iVar9 == 0) || ((*(byte *)(iVar9 + 0xe7) & 1) == 0)) {
          uVar6 = (*(undefined4 **)(iVar10 + 8))[1];
          uVar7 = **(undefined4 **)(iVar10 + 8);
        }
        else {
          uVar7 = *(undefined4 *)(iVar9 + 4);
          uVar6 = *(undefined4 *)(iVar9 + 0x1c);
        }
        uVar8 = __bswapsi2(uVar7);
        uVar3 = __bswapsi2(uVar6);
        uVar12 = uVar3 & uVar8;
        uVar3 = ~uVar3 | uVar8;
        if ((uVar8 == uVar12) || (uVar8 == uVar3)) {
          return 0x5001;
        }
        uVar4 = __bswapsi2(*(undefined4 *)(pbVar11 + 4));
        uVar5 = __bswapsi2(*(undefined4 *)(pbVar11 + 8));
        if ((uVar4 <= uVar8) && (uVar8 <= uVar5)) {
          return 0x5001;
        }
        if (uVar4 <= uVar12) {
          return 0x5001;
        }
        if (uVar3 <= uVar4) {
          return 0x5001;
        }
        if (uVar5 <= uVar12) {
          return 0x5001;
        }
        if (uVar3 <= uVar5) {
          return 0x5001;
        }
        if (100 < (uVar5 + 1) - uVar4) {
          return 0x5001;
        }
        if (uVar5 <= uVar4) {
          return 0x5001;
        }
      }
    }
    else {
      if (0x32 < uVar8) {
        if (uVar8 == 0x33) {
          iVar9 = *(int *)pbVar11;
          if (iVar9 == 0) {
            iVar9 = 0x78;
          }
          *(int *)pbVar2 = iVar9;
        }
        else if (uVar8 == 0x72) {
          pbVar2 = pbVar11;
        }
        goto LAB_ram_48157892;
      }
      if (uVar8 == 6) {
        if (*pbVar11 == 0) {
          *pbVar2 = *pbVar2 & 0xfd;
          uVar8 = piVar1[1];
        }
        else {
          *pbVar2 = *pbVar2 | 2;
          uVar8 = piVar1[1];
        }
        goto LAB_ram_48157892;
      }
      if (uVar8 == 0x20) {
        if (*pbVar11 == 0) {
          *pbVar2 = *pbVar2 & 0xfe;
          uVar8 = piVar1[1];
        }
        else {
          *pbVar2 = *pbVar2 | 1;
          uVar8 = piVar1[1];
        }
        goto LAB_ram_48157892;
      }
      if (uVar8 != 1) goto LAB_ram_48157892;
      iVar9 = *(int *)(iVar10 + 8);
      if ((((*(byte *)(iVar9 + 4) == *pbVar11) && (*(byte *)(iVar9 + 5) == pbVar11[1])) &&
          (*(byte *)(iVar9 + 6) == pbVar11[2])) && (*(byte *)(iVar9 + 7) == pbVar11[3])) {
        uVar6 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                         "E (%lu) %s: Please use esp_netif_set_ip_info interface to configure subnet mask\n"
                         ,uVar6,"esp_netif_lwip");
        return 0x5001;
      }
    }
    FUN_ram_4ff45158(pbVar2,pbVar11,piVar1[3]);
    uVar8 = piVar1[1];
LAB_ram_48157892:
    FUN_ram_4818cad6(*(undefined4 *)(iVar10 + 0x24),uVar8 & 0xff,pbVar2,piVar1[3]);
    return 0;
  }
  if (*(int *)(iVar10 + 0x40) == 2) {
    return 0x5005;
  }
  uVar8 = piVar1[1];
  if (uVar8 == 0x20) {
    if ((*pbVar2 & 1) != 0) {
      *pbVar11 = 1;
      return 0;
    }
LAB_ram_4815792c:
    *pbVar11 = 0;
  }
  else {
    if (uVar8 < 0x21) {
      if (uVar8 != 1) {
        if (uVar8 != 6) {
          return 0;
        }
        if ((*pbVar2 & 2) != 0) {
          *pbVar11 = 1;
          return 0;
        }
        goto LAB_ram_4815792c;
      }
    }
    else if (uVar8 != 0x32) {
      if (uVar8 == 0x33) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar2;
        return 0;
      }
      return 0;
    }
    FUN_ram_4ff45158(pbVar11,pbVar2,piVar1[3]);
  }
  return 0;
}


