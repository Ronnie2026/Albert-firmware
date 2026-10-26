/* Firmware entry: 0x48051e92 */

uint * FUN_ram_48051e92(uint *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar12 = (uint *)&UNK_ram_481f5274;
  memset(param_1,0,300);
  uVar11 = 0x111;
  uVar10 = 1;
  uVar4 = 0;
LAB_ram_48051ece:
  param_1[uVar4] = uVar11;
LAB_ram_48051ed8:
  do {
    puVar12 = puVar12 + 1;
    if (puVar12 == (uint *)&UNK_ram_481f52c4) {
      uVar4 = (uint)(byte)param_1[0x31];
      puVar12 = (uint *)&UNK_ram_481f5228;
      *(char *)(param_1 + 0x18) = (char)uVar10;
      if (uVar4 == 0) {
        uVar10 = 0x82;
        uVar4 = 1;
        uVar11 = 0;
        goto LAB_ram_48051fec;
      }
      bVar3 = false;
      uVar10 = 0x82;
      break;
    }
    uVar4 = 0;
    uVar11 = *puVar12 & 0x7ff;
    puVar8 = param_1;
    do {
      uVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      if (uVar11 <= uVar7) {
        if (uVar4 < uVar10) {
          if ((param_1[uVar4] == uVar11) || (0x17 < uVar10)) goto LAB_ram_48051ed8;
          uVar7 = uVar10 - uVar4 & 0xff;
          iVar2 = -(uVar7 - 1 & 0xff);
          iVar6 = uVar10 - 1;
          iVar9 = iVar2 + uVar10;
          uVar10 = uVar10 + 1 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar6 + iVar2,uVar7 << 2);
          goto LAB_ram_48051ece;
        }
        break;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 != uVar10);
    if (uVar10 < 0x18) {
      uVar10 = uVar10 + 1 & 0xff;
      goto LAB_ram_48051ece;
    }
  } while( true );
LAB_ram_48051f7c:
  do {
    uVar11 = 0;
    puVar8 = param_1 + 0x19;
    do {
      uVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      if (uVar10 <= uVar7) {
        if (uVar11 < uVar4) {
          if (param_1[uVar11 + 0x19] == uVar10) goto LAB_ram_48051ff8;
          if (0x17 < uVar4) goto LAB_ram_4805200e;
          uVar7 = uVar4 - uVar11 & 0xff;
          iVar2 = -(uVar7 - 1 & 0xff);
          iVar9 = uVar4 + 0x18;
          iVar6 = uVar4 + 0x19;
          uVar4 = uVar4 + 1 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar6 + iVar2,param_1 + iVar9 + iVar2,uVar7 << 2);
          goto LAB_ram_48051fec;
        }
        break;
      }
      uVar11 = uVar11 + 1 & 0xff;
    } while (uVar11 != uVar4);
    if (uVar4 < 0x18) break;
LAB_ram_4805200e:
    puVar12 = puVar12 + 1;
    if (puVar12 == (uint *)&UNK_ram_481f5274) goto LAB_ram_48052028;
    uVar10 = *puVar12 & 0x7ff;
  } while( true );
  uVar4 = uVar4 + 1 & 0xff;
LAB_ram_48051fec:
  param_1[uVar11 + 0x19] = uVar10;
  bVar3 = true;
LAB_ram_48051ff8:
  puVar12 = puVar12 + 1;
  if (puVar12 == (uint *)&UNK_ram_481f5274) goto LAB_ram_48052028;
  uVar10 = *puVar12 & 0x7ff;
  goto LAB_ram_48051f7c;
LAB_ram_48052028:
  if (bVar3) {
    *(char *)(param_1 + 0x31) = (char)uVar4;
  }
  uVar4 = (uint)(byte)param_1[0x4a];
  puVar12 = (uint *)&UNK_ram_481f5210;
  if (uVar4 == 0) {
    uVar10 = 0x286;
    uVar4 = 1;
    uVar11 = 0;
    goto LAB_ram_480520ba;
  }
  bVar3 = false;
  uVar10 = 0x286;
LAB_ram_48052048:
  do {
    uVar11 = 0;
    puVar8 = param_1 + 0x32;
    do {
      uVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      if (uVar10 <= uVar7) {
        if (uVar11 < uVar4) {
          if (param_1[uVar11 + 0x32] == uVar10) goto LAB_ram_480520c6;
          if (0x17 < uVar4) goto LAB_ram_480520dc;
          uVar7 = uVar4 - uVar11 & 0xff;
          iVar2 = -(uVar7 - 1 & 0xff);
          iVar9 = uVar4 + 0x31;
          iVar6 = uVar4 + 0x32;
          uVar4 = uVar4 + 1 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar6 + iVar2,param_1 + iVar9 + iVar2,uVar7 << 2);
          goto LAB_ram_480520ba;
        }
        break;
      }
      uVar11 = uVar11 + 1 & 0xff;
    } while (uVar11 != uVar4);
    if (uVar4 < 0x18) break;
LAB_ram_480520dc:
    puVar12 = puVar12 + 1;
    if (puVar12 == (uint *)&UNK_ram_481f5228) goto LAB_ram_480520ec;
    uVar10 = *puVar12 & 0x7ff;
  } while( true );
  uVar4 = uVar4 + 1 & 0xff;
LAB_ram_480520ba:
  param_1[uVar11 + 0x32] = uVar10;
  bVar3 = true;
LAB_ram_480520c6:
  puVar12 = puVar12 + 1;
  if (puVar12 == (uint *)&UNK_ram_481f5228) goto LAB_ram_480520ec;
  uVar10 = *puVar12 & 0x7ff;
  goto LAB_ram_48052048;
LAB_ram_480520ec:
  if (bVar3) {
    *(char *)(param_1 + 0x4a) = (char)uVar4;
  }
  if (param_2 != 0xc) {
    return param_1;
  }
  uVar4 = (uint)(byte)param_1[0x18];
  puVar12 = &DAT_ram_481f51dc;
  if (uVar4 == 0) {
    uVar10 = 0x20e;
    uVar4 = 1;
    uVar11 = 0;
    goto LAB_ram_480521b2;
  }
  bVar3 = false;
  uVar10 = 0x20e;
  do {
    uVar11 = 0;
    puVar8 = param_1;
    do {
      uVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      if (uVar10 <= uVar7) {
        if (uVar11 < uVar4) {
          if ((param_1[uVar11] == uVar10) || (0x17 < uVar4)) goto LAB_ram_480521be;
          uVar7 = uVar4 - uVar11 & 0xff;
          iVar2 = -(uVar7 - 1 & 0xff);
          iVar6 = uVar4 - 1;
          iVar9 = iVar2 + uVar4;
          uVar4 = uVar4 + 1 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar6 + iVar2,uVar7 << 2);
          goto LAB_ram_480521b2;
        }
        break;
      }
      uVar11 = uVar11 + 1 & 0xff;
    } while (uVar11 != uVar4);
    if (uVar4 < 0x18) {
      uVar4 = uVar4 + 1 & 0xff;
LAB_ram_480521b2:
      param_1[uVar11] = uVar10;
      bVar3 = true;
    }
LAB_ram_480521be:
    puVar12 = puVar12 + 1;
    if (puVar12 == (uint *)&UNK_ram_481f51ec) break;
    uVar10 = *puVar12 & 0x7ff;
  } while( true );
  if (bVar3) {
    *(char *)(param_1 + 0x18) = (char)uVar4;
  }
  bVar1 = (byte)param_1[0x31];
  uVar4 = (uint)bVar1;
  if (uVar4 == 0) {
    cVar5 = '\x01';
    uVar10 = 0;
  }
  else {
    puVar12 = param_1 + 0x19;
    uVar10 = 0;
    do {
      uVar11 = *puVar12;
      puVar12 = puVar12 + 1;
      if (0x2b9 < uVar11) {
        if (uVar10 < uVar4) {
          if (param_1[uVar10 + 0x19] == 0x2ba) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return param_1;
          }
          if (0x17 < uVar4) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return param_1;
          }
          uVar11 = uVar4 - uVar10 & 0xff;
          iVar2 = -(uVar11 - 1 & 0xff);
          cVar5 = bVar1 + 1;
          FUN_ram_4ff4522c(param_1 + uVar4 + 0x19 + iVar2,param_1 + uVar4 + 0x18 + iVar2,uVar11 << 2
                          );
          goto LAB_ram_48052266;
        }
        break;
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 != uVar4);
    if (0x17 < uVar4) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_1;
    }
    cVar5 = bVar1 + 1;
  }
LAB_ram_48052266:
  *(char *)(param_1 + 0x31) = cVar5;
  param_1[uVar10 + 0x19] = 0x2ba;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return param_1;
}


