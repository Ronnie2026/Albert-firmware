/* Firmware entry: 0x4807df90 */

/* WARNING: Removing unreachable block (ram,0x4807e17c) */

int FUN_ram_4807df90(int param_1,undefined1 *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piVar12;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  code *pcStack_74;
  int iStack_70;
  char cStack_6c;
  byte local_68 [66];
  undefined2 uStack_26;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  psVar2 = (short *)(param_2 + 2);
  psVar7 = psVar2;
  do {
    sVar1 = *psVar7;
    psVar7 = psVar7 + 1;
    if (0xfe < (ushort)(sVar1 - 1U)) {
      return 0;
    }
  } while ((short *)(param_2 + 0x3e) != psVar7);
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  FUN_ram_4819ad74(&uStack_80,10,"s%08lx",param_1);
  memset(local_68,0,0x46);
  iVar3 = FUN_ram_4802feee();
  psVar7 = psVar2;
  if (iVar3 == 0) {
    return 0;
  }
  do {
    psVar8 = psVar7 + 1;
    if (0xfe < (ushort)(*psVar7 - 1U)) {
      return 0;
    }
    psVar7 = psVar8;
  } while ((short *)(param_2 + 0x3e) != psVar8);
  local_68[0] = 0x53;
  local_68[1] = 0x54;
  local_68[2] = 0x47;
  local_68[3] = 0x54;
  local_68[4] = param_2[1] + '\x01';
  local_68[5] = *param_2;
  pbVar5 = local_68;
  pbVar10 = local_68 + 7;
  do {
    sVar1 = *psVar2;
    pbVar11 = pbVar10 + 2;
    psVar2 = psVar2 + 1;
    pbVar10[-1] = (byte)sVar1;
    *pbVar10 = (byte)((ushort)sVar1 >> 8);
    pbVar10 = pbVar11;
  } while ((byte *)((int)&uStack_26 + 1) != pbVar11);
  uVar9 = 0xffffffff;
  do {
    cVar6 = '\b';
    uVar9 = uVar9 ^ *pbVar5;
    do {
      cVar6 = cVar6 + -1;
      uVar9 = uVar9 >> 1 ^ -(uVar9 & 1) & 0xedb88320;
    } while (cVar6 != '\0');
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 != (byte *)&uStack_26);
  uVar9 = ~uVar9;
  uStack_26 = (undefined2)uVar9;
  uStack_24 = (undefined1)(uVar9 >> 0x10);
  uStack_23 = (undefined1)(uVar9 >> 0x18);
  pcStack_74 = FUN_ram_48025b94;
  uStack_84 = 0;
  iStack_70 = 0;
  cStack_6c = '\0';
  FUN_ram_4807df16(&pcStack_74);
  DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","sp_target_v2",1,&uStack_84);
  if (DAT_ram_4ff6dd64 == 0) {
    DAT_ram_4ff6dd64 = FUN_ram_4815a218(uStack_84,&uStack_80,local_68,0x46);
    if (DAT_ram_4ff6dd64 == 0) {
      DAT_ram_4ff6dd64 = FUN_ram_4815a1c4(uStack_84);
    }
    FUN_ram_4815a050(uStack_84);
    if (DAT_ram_4ff6dd64 == 0) {
      iVar4 = FUN_ram_48032dec();
      if (iVar4 != 0) {
        if (param_1 == 0) {
          FUN_ram_4ff45158(DAT_ram_4ff6dcac + 0x6ba4,param_2,0x3e);
LAB_ram_4807e1d6:
          DAT_ram_4ff6de90 = DAT_ram_4ff6de90 | 0x80;
          DAT_ram_4ff5bd64._0_1_ = 1;
        }
        else {
          piVar12 = (int *)(DAT_ram_4ff6dcac + 0x3608);
          uVar9 = 0;
          if (*(byte *)(DAT_ram_4ff6dcac + 0x6a08) != 0) {
            do {
              iVar4 = *piVar12;
              piVar12 = piVar12 + 0x68;
              if (param_1 == iVar4) {
                FUN_ram_4ff45158(DAT_ram_4ff6dcac + uVar9 * 0x1a0 + 0x3768,param_2,0x3e);
                goto LAB_ram_4807e1d6;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != *(byte *)(DAT_ram_4ff6dcac + 0x6a08));
          }
        }
      }
      goto LAB_ram_4807e112;
    }
  }
  iVar3 = 0;
LAB_ram_4807e112:
  if (cStack_6c != '\0') {
    cStack_6c = 0;
    DAT_ram_4ff6deec = (*pcStack_74)();
    fence();
    DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
    DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
    if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iStack_70)) {
      DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iStack_70;
    }
  }
  return iVar3;
}


