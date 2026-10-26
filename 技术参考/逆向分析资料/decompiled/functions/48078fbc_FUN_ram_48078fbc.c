/* Firmware entry: 0x48078fbc */

undefined8 FUN_ram_48078fbc(byte *param_1,uint param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if ((param_3 != (char *)0x0) && (param_2 != 0)) {
    bVar8 = *param_1;
    uVar3 = 0;
    iVar4 = 0;
joined_r0x48079016:
    if (bVar8 == 0x22) {
      uVar10 = uVar3 + 1;
      if (uVar10 < param_2) {
        bVar8 = param_1[uVar10];
        uVar11 = uVar10;
        while( true ) {
          uVar2 = uVar3 + 2;
          while (uVar3 = uVar2, bVar8 != 0x5c) {
            if (bVar8 == 0x22) {
              if (((iVar4 != 1) || (sVar5 = strlen(param_3), uVar11 - uVar10 != sVar5)) ||
                 ((uVar11 != uVar10 &&
                  (iVar6 = FUN_ram_4ff4511a(param_1 + uVar10,param_3), iVar6 != 0))))
              goto joined_r0x48079084;
              uVar10 = uVar3;
              if (uVar3 < param_2) goto LAB_ram_480790ce;
              if ((param_2 == uVar3) || (param_1[uVar3] != 0x3a)) goto LAB_ram_48078fca;
              goto joined_r0x48079110;
            }
            if (param_2 <= uVar3) goto LAB_ram_48078fca;
            uVar2 = uVar3 + 1;
            uVar11 = uVar3;
            bVar8 = param_1[uVar3];
          }
          uVar11 = uVar3 + 1;
          if ((param_2 <= uVar3) || (param_2 <= uVar11)) break;
          bVar8 = param_1[uVar11];
        }
      }
      goto LAB_ram_48078fca;
    }
    if ((bVar8 & 0xdf) == 0x5b) {
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 1;
joined_r0x48079084:
      if (uVar3 < param_2) goto LAB_ram_4807902c;
      goto LAB_ram_48078fca;
    }
    if ((bVar8 & 0xdf) != 0x5d) {
      uVar3 = uVar3 + 1;
      goto joined_r0x48079084;
    }
    if (iVar4 == 0) goto LAB_ram_48078fca;
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + -1;
    if (param_2 <= uVar3) goto LAB_ram_48078fca;
    goto LAB_ram_4807902c;
  }
  goto LAB_ram_48078fca;
  while (uVar10 = uVar10 + 1, uVar10 < param_2) {
LAB_ram_480790ce:
    if ((0x17 < (param_1[uVar10] - 9 & 0xff)) ||
       ((0x800013U >> (param_1[uVar10] - 9 & 0x1f) & 1) == 0)) break;
  }
  if ((uVar10 != param_2) && (param_1[uVar10] == 0x3a)) goto joined_r0x48079110;
LAB_ram_4807902c:
  bVar8 = param_1[uVar3];
  goto joined_r0x48079016;
LAB_ram_4807925e:
  iVar4 = (uVar3 - uVar10) + 1;
  goto LAB_ram_48078fce;
  while ((0x800013U >> (param_1[uVar10] - 9 & 0x1f) & 1) != 0) {
joined_r0x48079110:
    uVar3 = uVar10;
    uVar10 = uVar3 + 1;
    if ((param_2 <= uVar10) || (0x17 < (param_1[uVar10] - 9 & 0xff))) break;
  }
  if (param_2 != uVar10) {
    pbVar7 = param_1 + uVar10;
    bVar8 = *pbVar7;
    if (bVar8 == 0x22) {
      for (uVar3 = uVar3 + 2; uVar3 < param_2; uVar3 = uVar3 + 1) {
        while (param_1[uVar3] == 0x5c) {
          uVar11 = uVar3 + 1;
          uVar3 = uVar3 + 2;
          if ((param_2 <= uVar11) || (param_2 <= uVar3)) goto LAB_ram_48078fca;
        }
        if (param_1[uVar3] == 0x22) goto LAB_ram_4807925e;
      }
    }
    else if (((bVar8 & 0xdf) == 0x5b) && (iVar4 = 0, uVar3 = uVar10, uVar10 < param_2)) {
LAB_ram_48079164:
      while (bVar8 == 0x22) {
LAB_ram_480791a2:
        uVar3 = uVar3 + 1;
        if (param_2 == uVar3) goto LAB_ram_48078fca;
        bVar9 = param_1[uVar3];
        do {
          while (bVar9 == 0x5c) {
            uVar11 = uVar3 + 1;
            uVar3 = uVar3 + 2;
            if ((param_2 == uVar11) || (param_2 == uVar3)) goto LAB_ram_48078fca;
            bVar9 = param_1[uVar3];
          }
          uVar3 = uVar3 + 1;
          if (param_2 == uVar3) goto LAB_ram_48078fca;
          bVar8 = param_1[uVar3];
          bVar1 = bVar9 != 0x22;
          bVar9 = bVar8;
        } while (bVar1);
      }
      if ((bVar8 & 0xdf) == 0x5b) {
LAB_ram_48079198:
        iVar4 = iVar4 + 1;
      }
      else if ((bVar8 & 0xdf) == 0x5d) {
        if (iVar4 == 0) goto LAB_ram_48078fca;
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_ram_4807925e;
          uVar3 = uVar3 + 1;
          if (param_2 == uVar3) goto LAB_ram_48078fca;
          bVar8 = param_1[uVar3] & 0xdf;
          if (param_1[uVar3] == 0x22) goto LAB_ram_480791a2;
          if (bVar8 == 0x5b) goto LAB_ram_48079198;
        } while (bVar8 == 0x5d);
      }
      uVar3 = uVar3 + 1;
      if (param_2 == uVar3) goto LAB_ram_48078fca;
      bVar8 = param_1[uVar3];
      goto LAB_ram_48079164;
    }
  }
LAB_ram_48078fca:
  iVar4 = 0;
  pbVar7 = (byte *)0x0;
LAB_ram_48078fce:
  return CONCAT44(pbVar7,iVar4);
}


