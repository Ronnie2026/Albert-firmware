/* Firmware entry: 0x480b4fa4 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_cloud_config_480b4fa4(void)

{
  char cVar1;
  int iVar2;
  char *__s;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uStack_474;
  void *pvStack_470;
  uint auStack_46c [4];
  int iStack_45c;
  undefined1 *puStack_458;
  void *pvStack_44c;
  uint uStack_448;
  uint uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  uint uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  ushort uStack_424;
  undefined1 auStack_420 [1028];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4808cdaa();
  __s = DAT_ram_4ff6dcc8;
  if (iVar3 != 0) {
    if ((DAT_ram_4ff6dcc8 == (char *)0x0) || (DAT_ram_4ff6dcc4 == 0)) {
      FUN_ram_4808cb66(0x1f7,"resource_error");
      return;
    }
    pvStack_44c = memset(auStack_420,0,0x400);
    auStack_420[0] = 0x7b;
    uStack_448 = 0x400;
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_42c = 0;
    uStack_428 = 0;
    uStack_424 = 1;
    uStack_444 = 1;
    uStack_43c = 1;
    uStack_430 = 1;
    iStack_440 = 1;
    FUN_ram_4808c2dc(&pvStack_44c,&DAT_ram_481c4274,1);
    sVar4 = strlen(__s);
    FUN_ram_4808c96e(&pvStack_44c,"url",__s,sVar4);
    FUN_ram_4808c2dc(&pvStack_44c,"tokenConfigured",__s[0x181] != '\0');
    FUN_ram_480b4e36(&pvStack_44c,"intervalSec",*(undefined2 *)(__s + 0x288));
    FUN_ram_4808c2dc(&pvStack_44c,"enabled",__s[0x28a]);
    FUN_ram_480b2068(&pvStack_44c,"generation",*(undefined4 *)(__s + 0x284));
    FUN_ram_4808c96e(&pvStack_44c,"identityParameters",
                     "04c9f49bd2038c7df56a14898364c403fed03c81d060d7e175f1d4905dd252f1",0x40);
    FUN_ram_4808c96e(&pvStack_44c,"presetParameters",
                     "ea5a23e5653092c96f92a42531ac0067641ba675c7efb4e02d2898ef5ecb2c8b",0x40);
    pvStack_470 = pvStack_44c;
    if (((((char)uStack_424 == '\0') || (iStack_440 != 1)) || ((uStack_430 & 0xff) == 0)) ||
       ((uStack_448 < uStack_444 || (uStack_448 - uStack_444 < 2)))) {
      uStack_424 = uStack_424 & 0xff00;
    }
    else {
      puVar8 = (undefined1 *)((int)pvStack_44c + uStack_444);
      uStack_444 = uStack_444 + 1;
      *puVar8 = 0x7d;
      iStack_440 = 0;
      *(undefined1 *)((int)pvStack_44c + uStack_444) = 0;
    }
    uVar6 = uStack_444;
    FUN_ram_4802a8a8(auStack_46c,"Cache-Control");
    FUN_ram_4802a8a8(&iStack_45c,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_46c,&iStack_45c);
    FUN_ram_4802a59e(&iStack_45c);
    FUN_ram_4802a59e(auStack_46c);
    iVar2 = DAT_ram_4ff5cbe8;
    iVar3 = DAT_ram_4ff5cbdc;
    uStack_474 = 200;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      auStack_46c[0] = uVar6;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_474,&pvStack_470,auStack_46c);
        DAT_ram_4ff5cbc8 = '\0';
      }
      uVar6 = auStack_46c[0];
      if (auStack_46c[0] == 0) {
        uVar6 = 1;
      }
      iVar5 = FUN_ram_4ff206d8(uVar6,0x404);
      iVar7 = iVar2 + iVar3 * 0x1d40;
      *(int *)(iVar7 + 0x1cdc) = iVar5;
      if (iVar5 == 0) {
        if (*(char *)(iVar7 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar3 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (auStack_46c[0] != 0) {
          FUN_ram_4ff45158(iVar5,pvStack_470,auStack_46c[0]);
          iVar5 = *(int *)(iVar7 + 0x1cdc);
        }
        iStack_45c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_45c + 0x44c) != '\0') && (*(char *)(iStack_45c + 0x44c) != '\x06')) {
          *(int *)(iStack_45c + 0x1ce0) = iVar5;
          *(uint *)(iStack_45c + 0x1ce4) = auStack_46c[0];
          *(undefined4 *)(iStack_45c + 0x1ce8) = 0;
          puStack_458 = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_474,"application/json",iStack_45c,
                           &LAB_ram_4802d3f2);
        }
      }
    }
  }
  return;
}


