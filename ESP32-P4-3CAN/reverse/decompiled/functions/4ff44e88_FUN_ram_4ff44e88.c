/* Firmware entry: 0x4ff44e88 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4ff44e88(char *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  int unaff_retaddr;
  int iVar1;
  char **ppcVar2;
  char *pcVar3;
  char *__s;
  char *pcVar4;
  char acStack_120 [8];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined2 uStack_110;
  undefined1 uStack_10e;
  char *local_10c [9];
  char *apcStack_e8 [50];
  
  __s = acStack_120;
  pcVar3 = acStack_120;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10e = 0;
  itoa(param_2,acStack_120,10);
  iVar1 = FUN_ram_4ff2c6b0();
  pcVar4 = acStack_120;
  if (iVar1 != 0) goto LAB_ram_4ff44fb4;
  if (param_1 + -0x40000000 < (char *)0x4000000) {
    param_1 = s_<cached_disabled>_ram_4ff55308;
  }
  ppcVar2 = (char **)0x40000000;
  if ((int)param_3 < 0x40000000) goto LAB_ram_4ff44fa0;
  if ((int)param_3 < 0x44000000) {
    uStack_118 = CONCAT22(uStack_118._2_2_,0x7830);
    param_3 = (char *)&uStack_118;
    itoa(unaff_retaddr + -4,(int)&uStack_118 + 2,0x10);
    pcVar3 = acStack_120;
    if (((int)param_4 < 0x40000000) || (pcVar3 = acStack_120, 0x43ffffff < (int)param_4))
    goto LAB_ram_4ff44f20;
  }
  else if ((char *)0x3ffffff < param_4 + -0x40000000) goto LAB_ram_4ff44f20;
  param_4 = s_<cached_disabled>_ram_4ff55308;
  pcVar3 = acStack_120;
LAB_ram_4ff44f20:
  do {
    do {
      local_10c[3] = param_1;
      local_10c[7] = param_4;
      local_10c[1] = param_3;
      local_10c[5] = pcVar3;
      local_10c[0] = s_assert_failed__ram_4ff55320;
      local_10c[2] = s_Core_ram_4ff5431c + 4;
      local_10c[4] = &DAT_ram_4ff55330;
      local_10c[6] = &DAT_ram_4ff55334;
      local_10c[8] = s_mmu_ll_check_valid_paddr_region__ram_4ff54888 + 0x30;
      ppcVar2 = local_10c;
      iVar1 = 0;
      param_4 = (char *)0xc7;
      do {
        __s = *ppcVar2;
        param_3 = (char *)strlen(__s);
        if (param_4 < param_3) {
          param_3 = param_4;
        }
        param_4 = param_4 + -(int)param_3;
        FUN_ram_4ff45158((int)apcStack_e8 + iVar1,__s,param_3);
        iVar1 = iVar1 + (int)param_3;
      } while ((param_4 != (char *)0x0) && (ppcVar2 = ppcVar2 + 1, apcStack_e8 != ppcVar2));
      param_1 = acStack_120 + iVar1;
      *(undefined1 *)((int)apcStack_e8 + iVar1) = 0;
      FUN_ram_4ff36e40(apcStack_e8);
LAB_ram_4ff44fa0:
      pcVar4 = __s;
      if ((uint)((int)param_4 - (int)ppcVar2) < 0x4000000) {
        param_4 = s_<cached_disabled>_ram_4ff55308;
      }
LAB_ram_4ff44fb4:
      pcVar3 = pcVar4;
    } while (param_3 != (char *)0x0);
    param_3 = &DAT_ram_4ff5531c;
  } while( true );
}


