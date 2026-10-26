/* Firmware entry: 0x4800ceb0 */

uint FUN_ram_4800ceb0(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4800c81c();
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("usb_serial_jtag_vfs.c",0xed,"usb_serial_jtag_read","fd == USJ_LOCAL_FD");
  }
  FUN_ram_4ff216dc(&DAT_ram_4ff48374);
  iVar3 = DAT_ram_4ff48370;
  if (DAT_ram_4ff4837c == '\0') {
    if (DAT_ram_4ff48370 == -1) {
      iVar3 = (*(code *)PTR_FUN_ram_4800c834_ram_4ff4838c)(0);
      uVar4 = FUN_ram_4800d116();
      if (iVar3 == -1) goto joined_r0x4800cf06;
      if (DAT_ram_4ff48370 != -1) {
        uVar4 = uVar4 + 2;
        goto LAB_ram_4800d054;
      }
      if (uVar4 + 1 < param_3) {
        param_3 = uVar4 + 1;
      }
      if (param_3 != 0) goto LAB_ram_4800d09a;
    }
    else {
      DAT_ram_4ff48370 = -1;
      iVar6 = FUN_ram_4800d116();
      uVar4 = iVar6 + 1;
      if (DAT_ram_4ff48370 != -1) {
        uVar4 = iVar6 + 2;
      }
LAB_ram_4800d054:
      if (uVar4 <= param_3) {
        param_3 = uVar4;
      }
      if (param_3 != 0) {
LAB_ram_4800d09a:
        uVar2 = 0;
        do {
          iVar6 = DAT_ram_4ff48370;
          if (iVar3 == 0xd) {
            if (DAT_ram_4ff48384 == 1) {
              uVar1 = 10;
              goto LAB_ram_4800cf3e;
            }
            if (DAT_ram_4ff48384 == 0) {
              if (DAT_ram_4ff48370 == -1) {
                iVar6 = (*(code *)PTR_FUN_ram_4800c834_ram_4ff4838c)(0);
                if (iVar6 == -1) {
                  if (DAT_ram_4ff48370 != -1) goto LAB_ram_4800d00a;
                  DAT_ram_4ff48370 = iVar3;
                  FUN_ram_4ff216e6(&DAT_ram_4ff48374);
                  if (uVar2 != 0) {
                    return uVar2;
                  }
                  goto LAB_ram_4800cf22;
                }
                if (iVar6 == 10) goto LAB_ram_4800d0a6;
                if (DAT_ram_4ff48370 != -1) goto LAB_ram_4800d00a;
              }
              else {
                DAT_ram_4ff48370 = -1;
                if (iVar6 == 10) {
LAB_ram_4800d0a6:
                  param_3 = param_3 - 1;
                  uVar1 = 10;
                  goto LAB_ram_4800cf3e;
                }
              }
            }
            DAT_ram_4ff48370 = iVar6;
            *(undefined1 *)(param_2 + uVar2) = 0xd;
            uVar4 = uVar2 + 1;
            if (param_3 <= uVar4) goto LAB_ram_4800cf7c;
          }
          else {
            uVar1 = (undefined1)iVar3;
LAB_ram_4800cf3e:
            *(undefined1 *)(param_2 + uVar2) = uVar1;
            uVar4 = uVar2 + 1;
            if (param_3 <= uVar4) {
LAB_ram_4800cf7c:
              FUN_ram_4ff216e6(&DAT_ram_4ff48374);
              return uVar2 + 1;
            }
          }
LAB_ram_4800cf4c:
          iVar3 = DAT_ram_4ff48370;
          uVar2 = uVar4;
          if (DAT_ram_4ff48370 == -1) {
            iVar3 = (*(code *)PTR_FUN_ram_4800c834_ram_4ff4838c)(0);
            if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("usb_serial_jtag_vfs.c",0x108,"usb_serial_jtag_read","c != NONE");
            }
          }
          else {
            DAT_ram_4ff48370 = -1;
          }
        } while( true );
      }
      if (DAT_ram_4ff48370 != -1) {
LAB_ram_4800d00a:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("usb_serial_jtag_vfs.c",0xe3,"usb_serial_jtag_return_char",
                         "s_ctx.peek_char == NONE");
      }
    }
    DAT_ram_4ff48370 = iVar3;
    FUN_ram_4ff216e6(&DAT_ram_4ff48374);
  }
  else {
    uVar4 = FUN_ram_4800d116();
joined_r0x4800cf06:
    if (DAT_ram_4ff48370 != -1) {
      uVar4 = uVar4 + 1;
    }
    if (uVar4 <= param_3) {
      param_3 = uVar4;
    }
    if (param_3 != 0) {
      uVar4 = 0;
      goto LAB_ram_4800cf4c;
    }
    FUN_ram_4ff216e6(&DAT_ram_4ff48374);
  }
LAB_ram_4800cf22:
  puVar5 = (undefined4 *)FUN_ram_4819bf88();
  *puVar5 = 0xb;
  return 0xffffffff;
}


