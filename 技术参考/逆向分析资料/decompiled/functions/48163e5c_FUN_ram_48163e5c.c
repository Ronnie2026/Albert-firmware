/* Firmware entry: 0x48163e5c */

void FUN_ram_48163e5c(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(&DAT_ram_4ff4ba34 + param_1 * 0x48);
  if ((int)uVar1 < 0) {
LAB_ram_48163e82:
    uVar1 = *(uint *)(&DAT_ram_4ff4ba38 + param_1 * 0x48);
    if ((int)uVar1 < 0) goto LAB_ram_48163e90;
LAB_ram_48163f16:
    if ((int)(uVar1 - 0x20) < 0) {
      uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
    }
    else {
      uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
    }
    if ((uVar1 & 1) == 0) goto LAB_ram_48163e90;
    FUN_ram_4812b054();
    uVar1 = (&DAT_ram_4ff4ba3c)[param_1 * 0x12];
    if (-1 < (int)uVar1) goto LAB_ram_48163f3e;
LAB_ram_48163e9e:
    uVar1 = (&DAT_ram_4ff4ba40)[param_1 * 0x12];
    if ((int)uVar1 < 0) goto LAB_ram_48163eac;
LAB_ram_48163f66:
    if ((int)(uVar1 - 0x20) < 0) {
      uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
    }
    else {
      uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
    }
    if ((uVar1 & 1) == 0) goto LAB_ram_48163eac;
    FUN_ram_4812b054();
    uVar1 = (&DAT_ram_4ff4ba44)[param_1 * 0x12];
  }
  else {
    if ((int)(uVar1 - 0x20) < 0) {
      uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
    }
    else {
      uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
    }
    if ((uVar1 & 1) == 0) goto LAB_ram_48163e82;
    FUN_ram_4812b054();
    uVar1 = *(uint *)(&DAT_ram_4ff4ba38 + param_1 * 0x48);
    if (-1 < (int)uVar1) goto LAB_ram_48163f16;
LAB_ram_48163e90:
    uVar1 = (&DAT_ram_4ff4ba3c)[param_1 * 0x12];
    if ((int)uVar1 < 0) goto LAB_ram_48163e9e;
LAB_ram_48163f3e:
    if ((int)(uVar1 - 0x20) < 0) {
      uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
    }
    else {
      uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
    }
    if ((uVar1 & 1) == 0) goto LAB_ram_48163e9e;
    FUN_ram_4812b054();
    uVar1 = (&DAT_ram_4ff4ba40)[param_1 * 0x12];
    if (-1 < (int)uVar1) goto LAB_ram_48163f66;
LAB_ram_48163eac:
    uVar1 = (&DAT_ram_4ff4ba44)[param_1 * 0x12];
  }
  if (-1 < (int)uVar1) {
    if ((int)(uVar1 - 0x20) < 0) {
      uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
    }
    else {
      uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
    }
    if ((uVar1 & 1) != 0) {
      FUN_ram_4812b054();
      uVar1 = *(uint *)(&DAT_ram_4ff4ba30 + param_1 * 0x48);
      goto joined_r0x48163fb4;
    }
  }
  uVar1 = *(uint *)(&DAT_ram_4ff4ba30 + param_1 * 0x48);
joined_r0x48163fb4:
  if (3 < uVar1) {
    uVar1 = (&DAT_ram_4ff4ba48)[param_1 * 0x12];
    if (-1 < (int)uVar1) {
      if ((int)(uVar1 - 0x20) < 0) {
        uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
      }
      else {
        uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
      }
      if ((uVar1 & 1) != 0) {
        FUN_ram_4812b054();
      }
    }
    uVar1 = *(uint *)(&DAT_ram_4ff4ba4c + param_1 * 0x48);
    if (-1 < (int)uVar1) {
      if ((int)(uVar1 - 0x20) < 0) {
        uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
      }
      else {
        uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
      }
      if ((uVar1 & 1) != 0) {
        FUN_ram_4812b054();
      }
    }
    uVar1 = *(uint *)(&DAT_ram_4ff4ba50 + param_1 * 0x48);
    if (-1 < (int)uVar1) {
      if ((int)(uVar1 - 0x20) < 0) {
        uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
      }
      else {
        uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
      }
      if ((uVar1 & 1) != 0) {
        FUN_ram_4812b054();
      }
    }
    if (*(int *)(&DAT_ram_4ff4ba30 + param_1 * 0x48) == 8) {
      uVar1 = *(uint *)(&DAT_ram_4ff4ba54 + param_1 * 0x48);
      if (-1 < (int)uVar1) {
        if ((int)(uVar1 - 0x20) < 0) {
          uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
        }
        else {
          uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
        }
        if ((uVar1 & 1) != 0) {
          FUN_ram_4812b054();
        }
      }
      uVar1 = *(uint *)(&DAT_ram_4ff4ba58 + param_1 * 0x48);
      if (-1 < (int)uVar1) {
        if ((int)(uVar1 - 0x20) < 0) {
          uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
        }
        else {
          uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
        }
        if ((uVar1 & 1) != 0) {
          FUN_ram_4812b054();
        }
      }
      uVar1 = *(uint *)(&DAT_ram_4ff4ba5c + param_1 * 0x48);
      if (-1 < (int)uVar1) {
        if ((int)(uVar1 - 0x20) < 0) {
          uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
        }
        else {
          uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
        }
        if ((uVar1 & 1) != 0) {
          FUN_ram_4812b054();
        }
      }
      uVar1 = *(uint *)(&DAT_ram_4ff4ba60 + param_1 * 0x48);
      if (-1 < (int)uVar1) {
        if ((int)(uVar1 - 0x20) < 0) {
          uVar1 = 0xffffffffU >> (uVar1 & 0x1f) | 0xfffffe << (0x1f - uVar1 & 0x1f);
        }
        else {
          uVar1 = 0x7fffff >> (uVar1 - 0x20 & 0x1f);
        }
        if ((uVar1 & 1) != 0) {
          FUN_ram_4812b054();
        }
      }
    }
  }
  memset(&DAT_ram_4ff4ba2c + (-param_1 & 0x48),0,0x48);
  return;
}


