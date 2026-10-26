/* Firmware entry: 0x4ff44e06 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4ff44e06(void)

{
  int unaff_retaddr;
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *extraout_a2;
  char *extraout_a3;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *__s;
  char *pcVar8;
  undefined8 uVar9;
  char acStack_190 [8];
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined2 uStack_180;
  undefined1 uStack_17e;
  char *apcStack_17c [9];
  char *apcStack_158 [50];
  undefined2 auStack_64 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  char *local_54 [4];
  char *apcStack_44 [13];
  
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  auStack_64[0] = 0;
  memset(apcStack_44,0,0x32);
  itoa(unaff_retaddr + -3,&uStack_60,0x10);
  itoa(mhartid,auStack_64,10);
  local_54[3] = (char *)auStack_64;
  local_54[1] = (char *)&uStack_60;
  local_54[0] = s_abort___was_called_at_PC_0x_ram_4ff552e0;
  local_54[2] = s_on_core_ram_4ff552fc;
  ppcVar5 = local_54;
  do {
    pcVar4 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    strcat((char *)apcStack_44,pcVar4);
  } while (apcStack_44 != ppcVar5);
  pcVar1 = FUN_ram_4ff44e88;
  uVar9 = FUN_ram_4ff36e40(apcStack_44);
  pcVar6 = (char *)uVar9;
  __s = acStack_190;
  pcVar7 = acStack_190;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17e = 0;
  itoa((int)((ulonglong)uVar9 >> 0x20),acStack_190,10);
  iVar3 = FUN_ram_4ff2c6b0();
  pcVar4 = extraout_a2;
  pcVar2 = extraout_a3;
  pcVar8 = acStack_190;
  if (iVar3 != 0) goto LAB_ram_4ff44fb4;
  if (pcVar6 + -0x40000000 < (char *)0x4000000) {
    pcVar6 = s_<cached_disabled>_ram_4ff55308;
  }
  ppcVar5 = (char **)0x40000000;
  if ((int)extraout_a2 < 0x40000000) goto LAB_ram_4ff44fa0;
  if ((int)extraout_a2 < 0x44000000) {
    uStack_188 = CONCAT22(uStack_188._2_2_,0x7830);
    pcVar4 = (char *)&uStack_188;
    itoa(pcVar1 + -4,(int)&uStack_188 + 2,0x10);
    pcVar7 = acStack_190;
    if (((int)extraout_a3 < 0x40000000) || (pcVar7 = acStack_190, 0x43ffffff < (int)extraout_a3))
    goto LAB_ram_4ff44f20;
  }
  else if ((char *)0x3ffffff < extraout_a3 + -0x40000000) goto LAB_ram_4ff44f20;
  pcVar2 = s_<cached_disabled>_ram_4ff55308;
  pcVar7 = acStack_190;
LAB_ram_4ff44f20:
  do {
    apcStack_17c[3] = pcVar6;
    apcStack_17c[7] = pcVar2;
    apcStack_17c[1] = pcVar4;
    apcStack_17c[5] = pcVar7;
    apcStack_17c[0] = s_assert_failed__ram_4ff55320;
    apcStack_17c[2] = s_Core_ram_4ff5431c + 4;
    apcStack_17c[4] = &DAT_ram_4ff55330;
    apcStack_17c[6] = &DAT_ram_4ff55334;
    apcStack_17c[8] = s_mmu_ll_check_valid_paddr_region__ram_4ff54888 + 0x30;
    ppcVar5 = apcStack_17c;
    iVar3 = 0;
    pcVar2 = (char *)0xc7;
    do {
      __s = *ppcVar5;
      pcVar4 = (char *)strlen(__s);
      if (pcVar2 < pcVar4) {
        pcVar4 = pcVar2;
      }
      pcVar2 = pcVar2 + -(int)pcVar4;
      FUN_ram_4ff45158((int)apcStack_158 + iVar3,__s,pcVar4);
      iVar3 = iVar3 + (int)pcVar4;
    } while ((pcVar2 != (char *)0x0) && (ppcVar5 = ppcVar5 + 1, apcStack_158 != ppcVar5));
    pcVar6 = acStack_190 + iVar3;
    *(undefined1 *)((int)apcStack_158 + iVar3) = 0;
    FUN_ram_4ff36e40(apcStack_158);
LAB_ram_4ff44fa0:
    pcVar8 = __s;
    if ((uint)((int)pcVar2 - (int)ppcVar5) < 0x4000000) {
      pcVar2 = s_<cached_disabled>_ram_4ff55308;
    }
LAB_ram_4ff44fb4:
    pcVar7 = pcVar8;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = &DAT_ram_4ff5531c;
    }
  } while( true );
}


