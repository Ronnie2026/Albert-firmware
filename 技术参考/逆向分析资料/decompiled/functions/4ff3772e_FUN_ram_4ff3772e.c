/* Firmware entry: 0x4ff3772e */

void FUN_ram_4ff3772e(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char **ppcVar4;
  char **extraout_a1;
  code *pcVar5;
  undefined8 uVar6;
  char *pcStack_28;
  size_t sStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(uint *)(&DAT_ram_4ff4bc7c + mhartid * 4) < 3) {
    FUN_ram_4ff373fe();
  }
  pcVar2 = DAT_ram_4ff6d958;
  if (DAT_ram_4ff6d95c == '\0') {
    if (param_1[2] != 0) {
      pcVar2 = s_Guru_Meditation_Error__Core_ram_4ff54178;
      cVar1 = 'G';
      do {
        pcVar2 = pcVar2 + 1;
        FUN_ram_4ff3732e(cVar1);
        FUN_ram_4ff37386(cVar1);
        cVar1 = *pcVar2;
      } while (cVar1 != '\0');
      pcVar2 = s_panic_ed___ram_4ff54198;
      FUN_ram_4ff37582(*param_1);
      cVar1 = ' ';
      do {
        pcVar2 = pcVar2 + 1;
        FUN_ram_4ff3732e(cVar1);
        FUN_ram_4ff37386(cVar1);
        cVar1 = *pcVar2;
      } while (cVar1 != '\0');
      pcVar2 = (char *)param_1[2];
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        FUN_ram_4ff3732e(cVar1);
        FUN_ram_4ff37386(cVar1);
        cVar1 = *pcVar2;
      }
      cVar1 = ')';
      pcVar2 = &DAT_ram_4ff541a5;
      do {
        FUN_ram_4ff3732e(cVar1);
        FUN_ram_4ff37386(cVar1);
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    pcVar2 = (char *)param_1[3];
    if (pcVar2 != (char *)0x0) {
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        FUN_ram_4ff3732e(cVar1);
        FUN_ram_4ff37386(cVar1);
        cVar1 = *pcVar2;
      }
    }
  }
  else {
    param_1[3] = 0;
    pcVar5 = (code *)0x0;
    if (pcVar2 != (char *)0x0) {
      pcVar5 = FUN_ram_4ff374be;
    }
    param_1[4] = pcVar5;
    param_1[2] = 0;
    param_1[1] = 3;
  }
  cVar1 = '\r';
  pcVar2 = s_Rebooting____ram_4ff5422c + 0xd;
  do {
    FUN_ram_4ff3732e(cVar1);
    FUN_ram_4ff37386(cVar1);
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((code *)param_1[4] != (code *)0x0) {
    (*(code *)param_1[4])(param_1[7]);
  }
  cVar1 = '\r';
  pcVar2 = s_Rebooting____ram_4ff5422c + 0xd;
  do {
    FUN_ram_4ff3732e(cVar1);
    FUN_ram_4ff37386(cVar1);
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar6 = FUN_ram_4ff45682();
  ppcVar4 = (char **)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 == 0) {
    FUN_ram_4ff376c8();
    if ((code *)param_1[5] != (code *)0x0) {
      (*(code *)param_1[5])(param_1[7]);
    }
    FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
    DAT_ram_4ff6d95c = 0;
    FUN_ram_4ff374f4(s_ELF_file_SHA256__ram_4ff541d8);
    FUN_ram_4ff374f4(&DAT_ram_4ff589e0);
    FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
    FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
    FUN_ram_4ff376c8();
    if (DAT_ram_4ff6d950 == '\0') {
      DAT_ram_4ff6d950 = 1;
      FUN_ram_4ff386ea(param_1);
      DAT_ram_4ff6d950 = '\0';
    }
    else {
      FUN_ram_4ff374f4(s_Re_entered_core_dump__Exception_h_ram_4ff541ec);
    }
    FUN_ram_4ff376c8();
    iVar3 = FUN_ram_4ff37ff8();
    if (iVar3 == 0) {
      if (param_1[1] == 1) {
        FUN_ram_4ff38020(5);
      }
      else if (param_1[1] == 2) {
        FUN_ram_4ff38020(6);
      }
      else {
        FUN_ram_4ff38020(4);
      }
    }
    FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c);
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff37ff2();
  }
  if (*(char *)(param_1 + 8) == '\0') {
    pcVar2 = DAT_ram_4ff6d958;
    if (DAT_ram_4ff6d95c == '\0') goto LAB_ram_4ff3780e;
  }
  else {
    pcVar2 = (char *)param_1[2];
  }
  if (pcVar2 != (char *)0x0) {
    pcStack_28 = pcVar2;
    sStack_24 = strlen(pcVar2);
    ppcVar4 = &pcStack_28;
    ebreak();
  }
LAB_ram_4ff3780e:
  pcVar2 = s_Setting_breakpoint_at_0x_ram_4ff541a8;
  cVar1 = 'S';
  do {
    pcVar2 = pcVar2 + 1;
    FUN_ram_4ff3732e(cVar1,ppcVar4);
    FUN_ram_4ff37386(cVar1);
    cVar1 = *pcVar2;
    ppcVar4 = extraout_a1;
  } while (cVar1 != '\0');
  pcVar2 = s_and_returning____ram_4ff541c4;
  FUN_ram_4ff37524(param_1[6]);
  cVar1 = ' ';
  do {
    pcVar2 = pcVar2 + 1;
    FUN_ram_4ff3732e(cVar1);
    FUN_ram_4ff37386(cVar1);
    cVar1 = *pcVar2;
  } while (cVar1 != '\0');
  FUN_ram_4ff375f6();
  FUN_ram_4fc00208(&DAT_ram_4ff47d98);
  FUN_ram_4fc00214(&DAT_ram_4ff47d98);
  FUN_ram_4fc0020c(&DAT_ram_4ff47d98);
  FUN_ram_4ff2fb9a(0,param_1[6]);
  return;
}


