/* Firmware entry: 0x480072da */

undefined4 FUN_ram_480072da(uint param_1,undefined2 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (4 < param_1) {
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 9;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffffff;
  }
  if (param_2 == (undefined2 *)0x0) {
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 0x16;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffffff;
  }
  memset(param_2,0,0x1c);
  if (*(int *)((&PTR_DAT_ram_4ff48158_ram_481e5190)[param_1] + 0x18) == 0) {
    *param_2 = 8;
  }
  else if (*(int *)((&PTR_DAT_ram_4ff48158_ram_481e5190)[param_1] + 0x18) == 1) {
    *param_2 = 2;
  }
  iVar2 = FUN_ram_48009538(param_1,auStack_14);
  if (iVar2 != 0) {
LAB_ram_48007586:
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 0x16;
    return 0xffffffff;
  }
  uVar1 = param_2[2];
  uVar4 = uVar1 & 0xfffc;
  param_2[2] = uVar4;
  if (auStack_14[0] == 2) {
    param_2[2] = uVar4 | 2;
  }
  else if (auStack_14[0] < 3) {
    if (auStack_14[0] != 0) {
      param_2[2] = uVar4 | 1;
    }
  }
  else {
    if (auStack_14[0] != 3) goto LAB_ram_48007400;
    param_2[2] = uVar1 | 3;
  }
  iVar2 = FUN_ram_48009676(param_1,auStack_14);
  if (iVar2 != 0) goto LAB_ram_48007586;
  if (auStack_14[0] != 1) {
    if (auStack_14[0] != 3) goto LAB_ram_48007400;
    param_2[2] = param_2[2] | 4;
  }
  iVar2 = FUN_ram_480097a6(param_1,auStack_14);
  if (iVar2 != 0) goto LAB_ram_48007586;
  if (auStack_14[0] == 2) {
    param_2[2] = param_2[2] | 0x10;
  }
  else if (auStack_14[0] == 3) {
    param_2[2] = param_2[2] | 0x30;
  }
  else if (auStack_14[0] != 0) {
LAB_ram_48007400:
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 0x58;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffffff;
  }
  auStack_14[0] = 0;
  iVar2 = FUN_ram_48009b7a(param_1,auStack_14);
  if (iVar2 != 0) goto LAB_ram_48007586;
  uVar1 = param_2[2];
  param_2[2] = uVar1 | 0x300;
  if (auStack_14[0] == 0x9600) {
    auStack_14[0] = 0xf;
    goto LAB_ram_480074f4;
  }
  if (auStack_14[0] < 0x9601) {
    if (auStack_14[0] == 300) {
      auStack_14[0] = 7;
      goto LAB_ram_480074f4;
    }
    if (auStack_14[0] < 0x12d) {
      if (auStack_14[0] == 0x6e) {
        auStack_14[0] = 3;
        goto LAB_ram_480074f4;
      }
      if (auStack_14[0] < 0x6f) {
        if (auStack_14[0] == 0x32) {
          auStack_14[0] = 1;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0x4b) {
          auStack_14[0] = 2;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0) goto LAB_ram_480074f4;
      }
      else {
        if (auStack_14[0] == 0x96) {
          auStack_14[0] = 5;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 200) {
          auStack_14[0] = 6;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0x86) {
          auStack_14[0] = 4;
          goto LAB_ram_480074f4;
        }
      }
    }
    else {
      if (auStack_14[0] == 0x960) {
        auStack_14[0] = 0xb;
        goto LAB_ram_480074f4;
      }
      if (auStack_14[0] < 0x961) {
        if (auStack_14[0] == 0x4b0) {
          auStack_14[0] = 9;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0x708) {
          auStack_14[0] = 10;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 600) {
          auStack_14[0] = 8;
          goto LAB_ram_480074f4;
        }
      }
      else {
        if (auStack_14[0] == 0x2580) {
          auStack_14[0] = 0xd;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0x4b00) {
          auStack_14[0] = 0xe;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0x12c0) {
          auStack_14[0] = 0xc;
          goto LAB_ram_480074f4;
        }
      }
    }
  }
  else {
    if (auStack_14[0] == 1000000) {
      auStack_14[0] = 0x17;
      goto LAB_ram_480074f4;
    }
    if (auStack_14[0] < 0xf4241) {
      if (auStack_14[0] == 0x70800) {
        auStack_14[0] = 0x13;
        goto LAB_ram_480074f4;
      }
      if (auStack_14[0] < 0x70801) {
        if (auStack_14[0] == 0x1c200) {
          auStack_14[0] = 0x11;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0x38400) {
          auStack_14[0] = 0x12;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0xe100) {
          auStack_14[0] = 0x10;
          goto LAB_ram_480074f4;
        }
      }
      else {
        if (auStack_14[0] == 0x8ca00) {
          auStack_14[0] = 0x15;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0xe1000) {
          auStack_14[0] = 0x16;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 500000) {
          auStack_14[0] = 0x14;
          goto LAB_ram_480074f4;
        }
      }
    }
    else {
      if (auStack_14[0] == 2500000) {
        auStack_14[0] = 0x1b;
        goto LAB_ram_480074f4;
      }
      if (auStack_14[0] < 0x2625a1) {
        if (auStack_14[0] == 1500000) {
          auStack_14[0] = 0x19;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 2000000) {
          auStack_14[0] = 0x1a;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 0x119400) {
          auStack_14[0] = 0x18;
          goto LAB_ram_480074f4;
        }
      }
      else {
        if (auStack_14[0] == 3500000) {
          auStack_14[0] = 0x1d;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 4000000) {
          auStack_14[0] = 0x1e;
          goto LAB_ram_480074f4;
        }
        if (auStack_14[0] == 3000000) {
          auStack_14[0] = 0x1c;
          goto LAB_ram_480074f4;
        }
      }
    }
  }
  param_2[2] = uVar1 | 0x700;
LAB_ram_480074f4:
  *(uint *)(param_2 + 0xc) = auStack_14[0];
  *(uint *)(param_2 + 10) = auStack_14[0];
  return 0;
}


