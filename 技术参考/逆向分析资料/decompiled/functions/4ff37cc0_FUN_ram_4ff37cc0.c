/* Firmware entry: 0x4ff37cc0 */

void FUN_ram_4ff37cc0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_1[0x22];
  param_2[1] = 4;
  *param_2 = mhartid;
  if ((uVar1 < 0x10) &&
     ((&PTR_s_Instruction_address_misaligned_ram_4ff543e4_ram_4ff58200)[uVar1] != (undefined *)0x0))
  {
    param_2[2] = (&PTR_s_Instruction_address_misaligned_ram_4ff543e4_ram_4ff58200)[uVar1];
  }
  param_2[3] = s_Exception_was_unhandled__ram_4ff543ac;
  if ((DAT_csreg_07e1 & 0x100) != 0) {
    if ((mcause & 0xff) == 5) {
      uVar1 = DAT_csreg_0be1;
      if (DAT_csreg_0be1 == 0) {
        uVar1 = DAT_csreg_0be0;
      }
    }
    else {
      if ((mcause & 0xff) != 7) goto LAB_ram_4ff37d28;
      uVar1 = DAT_csreg_0bf2;
      if ((DAT_csreg_0bf2 == 0) && (uVar1 = DAT_csreg_0bf1, DAT_csreg_0bf1 == 0)) {
        uVar1 = DAT_csreg_0bf0;
      }
    }
    uVar1 = uVar1 & 0xfffffffe;
    if (uVar1 != 0) {
      *param_1 = uVar1;
      param_2[6] = uVar1;
      return;
    }
  }
LAB_ram_4ff37d28:
  param_2[6] = *param_1;
  return;
}


