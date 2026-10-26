/* Firmware entry: 0x48142c4a */

undefined4 FUN_ram_48142c4a(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  char cStack_28;
  undefined1 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (uint *)0x0) {
    param_2 = &DAT_ram_48236f9c;
  }
  if (param_1 == (uint *)0x0) {
    return 0xfffffff0;
  }
  puVar9 = DAT_ram_4ff6e208;
  if (DAT_ram_4ff6e208 == (uint *)0x0) {
    cVar4 = (char)param_2[5];
    if ((cVar4 == '\x06') && (bVar1 = false, (char)param_2[4] == '\0')) goto LAB_ram_48142cf8;
    bVar2 = false;
    bVar1 = false;
    if (param_3 == 0) goto LAB_ram_48142da0;
LAB_ram_48142cae:
    puVar9 = DAT_ram_4ff6e208;
    *(char *)(param_1 + 5) = cVar4;
    cVar4 = (char)param_2[5];
    bVar1 = bVar2;
  }
  else {
    do {
      if (param_1 == puVar9) {
        bVar1 = true;
        goto LAB_ram_48142c78;
      }
      puVar10 = puVar9 + 0xd;
      puVar9 = (uint *)*puVar10;
    } while ((uint *)*puVar10 != (uint *)0x0);
    bVar1 = false;
LAB_ram_48142c78:
    cVar4 = (char)param_2[5];
    if ((cVar4 == '\x06') && ((char)param_2[4] == '\0')) {
LAB_ram_48142cf8:
      uStack_38 = *param_2;
      if (((uStack_38 & 0xc0ff) == 0x80fe) || (((uStack_38 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
        uStack_34 = param_2[1];
        uStack_30 = param_2[2];
        uStack_2c = param_2[3];
        cStack_28 = 0;
        uStack_24 = 6;
        iVar3 = FUN_ram_48148070(&uStack_38);
        if (iVar3 != 0) {
          if (((uStack_38 & 0xc0ff) == 0x80fe) || (((uStack_38 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)
             ) {
            cStack_28 = *(char *)(iVar3 + 0xea) + '\x01';
          }
          else {
            cStack_28 = 0;
          }
        }
        param_2 = &uStack_38;
      }
      if (param_3 != 0) {
        cVar4 = (char)param_2[5];
        bVar2 = bVar1;
        for (puVar9 = DAT_ram_4ff6e208; bVar1 = bVar2, puVar9 != (uint *)0x0;
            puVar9 = (uint *)puVar9[0xd]) {
LAB_ram_48142c8e:
          if ((puVar9 != param_1) &&
             ((((*(byte *)((int)param_1 + 0x31) & 4) == 0 ||
               ((*(byte *)((int)puVar9 + 0x31) & 4) == 0)) &&
              (*(ushort *)((int)puVar9 + 0x3a) == param_3)))) {
            if ((char)puVar9[5] == cVar4) {
              uVar7 = *puVar9;
              uVar6 = *param_2;
              if (cVar4 == '\x06') {
                if (((uVar7 == uVar6) && (puVar9[1] == param_2[1])) &&
                   ((puVar9[2] == param_2[2] &&
                    ((puVar9[3] == param_2[3] && ((char)puVar9[4] == (char)param_2[4])))))) {
                  return 0xfffffff8;
                }
                if ((((uVar6 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0))
                {
                  return 0xfffffff8;
                }
                if (((uVar7 == 0) && (puVar9[1] == 0)) && ((puVar9[2] == 0 && (puVar9[3] == 0)))) {
                  return 0xfffffff8;
                }
                goto LAB_ram_48142caa;
              }
              if (((uVar7 == uVar6) || (uVar6 == 0)) || (uVar7 == 0)) {
                return 0xfffffff8;
              }
            }
            if ((char)puVar9[5] == '.') {
              return 0xfffffff8;
            }
            if (cVar4 == '.') {
              return 0xfffffff8;
            }
          }
LAB_ram_48142caa:
          bVar2 = bVar1;
        }
        goto LAB_ram_48142cae;
      }
    }
    else {
      puVar9 = DAT_ram_4ff6e208;
      if (param_3 != 0) goto LAB_ram_48142c8e;
    }
LAB_ram_48142da0:
    puVar9 = DAT_ram_4ff6e208;
    param_3 = 0xc000;
    if (DAT_ram_4ff47f76 != -1) {
      param_3 = (uint)(ushort)(DAT_ram_4ff47f76 + 1);
    }
    sVar5 = 0x4000;
    for (puVar10 = DAT_ram_4ff6e208; puVar10 != (uint *)0x0; puVar10 = (uint *)puVar10[0xd]) {
      while (*(ushort *)((int)puVar10 + 0x3a) == param_3) {
        sVar5 = sVar5 + -1;
        if (sVar5 == 0) {
          DAT_ram_4ff47f76 = (short)param_3;
          return 0xfffffff8;
        }
        if (param_3 == 0xffff) {
          param_3 = 0xc000;
          puVar10 = DAT_ram_4ff6e208;
        }
        else {
          param_3 = param_3 + 1 & 0xffff;
          puVar10 = DAT_ram_4ff6e208;
        }
      }
    }
    DAT_ram_4ff47f76 = (short)param_3;
    *(char *)(param_1 + 5) = (char)param_2[5];
    cVar4 = (char)param_2[5];
  }
  if (cVar4 == '\x06') {
    uVar11 = param_2[3];
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar11;
    uVar8 = (undefined1)param_2[4];
  }
  else {
    uVar6 = *param_2;
    uVar8 = 0;
    param_1[3] = 0;
    *param_1 = uVar6;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  *(undefined1 *)(param_1 + 4) = uVar8;
  *(short *)((int)param_1 + 0x3a) = (short)param_3;
  if (!bVar1) {
    param_1[0xd] = (uint)puVar9;
    DAT_ram_4ff6e208 = param_1;
  }
  return 0;
}


