/* Firmware entry: 0x4813c166 */

undefined4 FUN_ram_4813c166(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined **ppuVar12;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  char cStack_28;
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (uint *)0x0) {
    param_2 = &DAT_ram_48236f9c;
  }
  if (param_1 == (uint *)0x0) {
    return 0xfffffff0;
  }
  if (param_1[0xf] != 0) {
    return 0xfffffffa;
  }
  bVar1 = *(byte *)((int)param_1 + 0x31);
  if (((char)param_2[5] == '\x06') && ((char)param_2[4] == '\0')) {
    if ((*param_2 & 0xc0ff) == 0x80fe) {
      uStack_2c = param_2[3];
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      cStack_28 = '\0';
      uStack_38 = *param_2;
      cStack_24 = (char)param_2[5];
      iVar4 = FUN_ram_48148070(&uStack_38);
      if (iVar4 != 0) {
        if (((uStack_38 & 0xc0ff) == 0x80fe) ||
           (cStack_28 = '\0', ((uStack_38 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
          cStack_28 = *(char *)(iVar4 + 0xea) + '\x01';
        }
      }
      param_2 = &uStack_38;
      goto LAB_ram_4813c192;
    }
    if (param_3 == 0) goto LAB_ram_4813c2fc;
LAB_ram_4813c196:
    cVar11 = (char)param_2[5];
    ppuVar12 = &PTR_DAT_ram_4ff6e1c8_ram_48236b38;
    do {
      for (puVar8 = *(uint **)*ppuVar12; puVar8 != (uint *)0x0; puVar8 = (uint *)puVar8[0xd]) {
        if ((*(ushort *)((int)puVar8 + 0x42) == param_3) &&
           ((((*(byte *)((int)param_1 + 0x31) & 4) == 0 ||
             ((*(byte *)((int)puVar8 + 0x31) & 4) == 0)) &&
            (cVar2 = (char)puVar8[5], (cVar2 == '\x06') == (cVar11 == '\x06'))))) {
          uVar9 = *puVar8;
          if (cVar2 == '\x06') {
            if (uVar9 == 0) {
              if (((puVar8[1] == 0) && (puVar8[2] == 0)) && (puVar8[3] == 0)) {
                return 0xfffffff8;
              }
              if (*param_2 == 0) {
                if (param_2[1] == 0) goto LAB_ram_4813c216;
                if (puVar8[1] == param_2[1]) goto LAB_ram_4813c230;
              }
            }
            else {
              uVar6 = *param_2;
              if (uVar6 == 0) {
                if (param_2[1] != 0) goto LAB_ram_4813c1ba;
LAB_ram_4813c216:
                if (param_2[2] == 0) {
                  uVar6 = 0;
                  if (param_2[3] == 0) {
                    return 0xfffffff8;
                  }
                  goto LAB_ram_4813c222;
                }
                if (uVar9 != 0) goto LAB_ram_4813c1ba;
              }
              else {
LAB_ram_4813c222:
                if (uVar6 != uVar9) goto LAB_ram_4813c1ba;
              }
              if (puVar8[1] == param_2[1]) {
LAB_ram_4813c230:
                if (((puVar8[2] == param_2[2]) && (puVar8[3] == param_2[3])) &&
                   ((char)puVar8[4] == (char)param_2[4])) {
                  return 0xfffffff8;
                }
              }
            }
          }
          else {
            if (uVar9 == 0) {
              return 0xfffffff8;
            }
            if (*param_2 == 0) {
              return 0xfffffff8;
            }
            if ((cVar2 == cVar11) && (*param_2 == uVar9)) {
              return 0xfffffff8;
            }
          }
        }
LAB_ram_4813c1ba:
      }
      ppuVar12 = ppuVar12 + 1;
    } while (ppuVar12 != &PTR_DAT_ram_4ff6e1c8_ram_48236b38 + ((bVar1 & 4) == 0) + 3);
    uVar9 = *param_2;
    if (cVar11 == '\x06') goto LAB_ram_4813c314;
LAB_ram_4813c25c:
    uVar5 = (undefined2)param_3;
    uVar6 = uVar9;
joined_r0x4813c320:
    if ((uVar6 == 0) && ((char)param_1[5] == cVar11)) goto LAB_ram_4813c27e;
  }
  else {
LAB_ram_4813c192:
    if (param_3 != 0) goto LAB_ram_4813c196;
LAB_ram_4813c2fc:
    param_3 = FUN_ram_4813bf22();
    if (param_3 == 0) {
      return 0xfffffffe;
    }
    cVar11 = (char)param_2[5];
    uVar9 = *param_2;
    if (cVar11 != '\x06') goto LAB_ram_4813c25c;
LAB_ram_4813c314:
    uVar5 = (undefined2)param_3;
    if (((uVar9 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) {
      uVar6 = param_2[3];
      goto joined_r0x4813c320;
    }
  }
  *(char *)(param_1 + 5) = cVar11;
  if ((char)param_2[5] == '\x06') {
    uVar10 = param_2[1];
    uVar3 = param_2[2];
    uVar7 = param_2[3];
    uVar6 = param_2[4];
    *param_1 = uVar9;
    param_1[1] = uVar10;
    param_1[2] = uVar3;
    param_1[3] = uVar7;
    *(char *)(param_1 + 4) = (char)uVar6;
  }
  else {
    *param_1 = uVar9;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
LAB_ram_4813c27e:
  *(undefined2 *)((int)param_1 + 0x42) = uVar5;
  puVar8 = param_1;
  param_1[0xd] = (uint)DAT_ram_4ff6e1cc;
  DAT_ram_4ff6e1cc = puVar8;
  FUN_ram_4814257c();
  return 0;
}


