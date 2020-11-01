const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("Bulbasaur"),
    [SPECIES_IVYSAUR] = _("Ivysaur"),
    [SPECIES_VENUSAUR] = _("Venusaur"),
    [SPECIES_CHARMANDER] = _("Charmander"),
    [SPECIES_CHARMELEON] = _("Charmeleon"),
    [SPECIES_CHARIZARD] = _("Charizard"),
    [SPECIES_SQUIRTLE] = _("Squirtle"),
    [SPECIES_WARTORTLE] = _("Wartortle"),
    [SPECIES_BLASTOISE] = _("Blastoise"),
    [SPECIES_CATERPIE] = _("Caterpie"),
    [SPECIES_METAPOD] = _("Metapod"),
    [SPECIES_BUTTERFREE] = _("Butterfree"),
    [SPECIES_WEEDLE] = _("Weedle"),
    [SPECIES_KAKUNA] = _("Kakuna"),
    [SPECIES_BEEDRILL] = _("Beedrill"),
    [SPECIES_PIDGEY] = _("Pidgey"),
    [SPECIES_PIDGEOTTO] = _("Pidgeotto"),
    [SPECIES_PIDGEOT] = _("Pidgeot"),
    [SPECIES_RATTATA] = _("Rattata"),
    [SPECIES_RATICATE] = _("Raticate"),
    [SPECIES_SPEAROW] = _("Spearow"),
    [SPECIES_FEAROW] = _("Fearow"),
    [SPECIES_EKANS] = _("Ekans"),
    [SPECIES_ARBOK] = _("Arbok"),
    [SPECIES_PIKACHU] = _("Pikachu"),
    [SPECIES_RAICHU] = _("Raichu"),
    [SPECIES_SANDSHREW] = _("Sandshrew"),
    [SPECIES_SANDSLASH] = _("Sandslash"),
    [SPECIES_NIDORAN_F] = _("Nidoran♀"),
    [SPECIES_NIDORINA] = _("Nidorina"),
    [SPECIES_NIDOQUEEN] = _("Nidoqueen"),
    [SPECIES_NIDORAN_M] = _("Nidoran♂"),
    [SPECIES_NIDORINO] = _("Nidorino"),
    [SPECIES_NIDOKING] = _("Nidoking"),
    [SPECIES_CLEFAIRY] = _("Clefairy"),
    [SPECIES_CLEFABLE] = _("Clefable"),
    [SPECIES_VULPIX] = _("Vulpix"),
    [SPECIES_NINETALES] = _("Ninetales"),
    [SPECIES_JIGGLYPUFF] = _("Jigglypuff"),
    [SPECIES_WIGGLYTUFF] = _("Wigglytuff"),
    [SPECIES_ZUBAT] = _("Zubat"),
    [SPECIES_GOLBAT] = _("Golbat"),
    [SPECIES_ODDISH] = _("Oddish"),
    [SPECIES_GLOOM] = _("Gloom"),
    [SPECIES_VILEPLUME] = _("Vileplume"),
    [SPECIES_PARAS] = _("Paras"),
    [SPECIES_PARASECT] = _("Parasect"),
    [SPECIES_VENONAT] = _("Venonat"),
    [SPECIES_VENOMOTH] = _("Venomoth"),
    [SPECIES_DIGLETT] = _("Diglett"),
    [SPECIES_DUGTRIO] = _("Dugtrio"),
    [SPECIES_MEOWTH] = _("Meowth"),
    [SPECIES_PERSIAN] = _("Persian"),
    [SPECIES_PSYDUCK] = _("Psyduck"),
    [SPECIES_GOLDUCK] = _("Golduck"),
    [SPECIES_MANKEY] = _("Mankey"),
    [SPECIES_PRIMEAPE] = _("Primeape"),
    [SPECIES_GROWLITHE] = _("Growlithe"),
    [SPECIES_ARCANINE] = _("Arcanine"),
    [SPECIES_POLIWAG] = _("Poliwag"),
    [SPECIES_POLIWHIRL] = _("Poliwhirl"),
    [SPECIES_POLIWRATH] = _("Poliwrath"),
    [SPECIES_ABRA] = _("Abra"),
    [SPECIES_KADABRA] = _("Kadabra"),
    [SPECIES_ALAKAZAM] = _("Alakazam"),
    [SPECIES_MACHOP] = _("Machop"),
    [SPECIES_MACHOKE] = _("Machoke"),
    [SPECIES_MACHAMP] = _("Machamp"),
    [SPECIES_BELLSPROUT] = _("Bellsprout"),
    [SPECIES_WEEPINBELL] = _("Weepinbell"),
    [SPECIES_VICTREEBEL] = _("Victreebel"),
    [SPECIES_TENTACOOL] = _("Tentacool"),
    [SPECIES_TENTACRUEL] = _("Tentacruel"),
    [SPECIES_GEODUDE] = _("Geodude"),
    [SPECIES_GRAVELER] = _("Graveler"),
    [SPECIES_GOLEM] = _("Golem"),
    [SPECIES_PONYTA] = _("Ponyta"),
    [SPECIES_RAPIDASH] = _("Rapidash"),
    [SPECIES_SLOWPOKE] = _("Slowpoke"),
    [SPECIES_SLOWBRO] = _("Slowbro"),
    [SPECIES_MAGNEMITE] = _("Magnemite"),
    [SPECIES_MAGNETON] = _("Magneton"),
    [SPECIES_FARFETCHD] = _("Farfetch'd"),
    [SPECIES_DODUO] = _("Doduo"),
    [SPECIES_DODRIO] = _("Dodrio"),
    [SPECIES_SEEL] = _("Seel"),
    [SPECIES_DEWGONG] = _("Dewgong"),
    [SPECIES_GRIMER] = _("Grimer"),
    [SPECIES_MUK] = _("Muk"),
    [SPECIES_SHELLDER] = _("Shellder"),
    [SPECIES_CLOYSTER] = _("Cloyster"),
    [SPECIES_GASTLY] = _("Gastly"),
    [SPECIES_HAUNTER] = _("Haunter"),
    [SPECIES_GENGAR] = _("Gengar"),
    [SPECIES_ONIX] = _("Onix"),
    [SPECIES_DROWZEE] = _("Drowzee"),
    [SPECIES_HYPNO] = _("Hypno"),
    [SPECIES_KRABBY] = _("Krabby"),
    [SPECIES_KINGLER] = _("Kingler"),
    [SPECIES_VOLTORB] = _("Voltorb"),
    [SPECIES_ELECTRODE] = _("Electrode"),
    [SPECIES_EXEGGCUTE] = _("Exeggcute"),
    [SPECIES_EXEGGUTOR] = _("Exeggutor"),
    [SPECIES_CUBONE] = _("Cubone"),
    [SPECIES_MAROWAK] = _("Marowak"),
    [SPECIES_HITMONLEE] = _("Hitmonlee"),
    [SPECIES_HITMONCHAN] = _("Hitmonchan"),
    [SPECIES_LICKITUNG] = _("Lickitung"),
    [SPECIES_KOFFING] = _("Koffing"),
    [SPECIES_WEEZING] = _("Weezing"),
    [SPECIES_RHYHORN] = _("Rhyhorn"),
    [SPECIES_RHYDON] = _("Rhydon"),
    [SPECIES_CHANSEY] = _("Chansey"),
    [SPECIES_TANGELA] = _("Tangela"),
    [SPECIES_KANGASKHAN] = _("Kangaskhan"),
    [SPECIES_HORSEA] = _("Horsea"),
    [SPECIES_SEADRA] = _("Seadra"),
    [SPECIES_GOLDEEN] = _("Goldeen"),
    [SPECIES_SEAKING] = _("Seaking"),
    [SPECIES_STARYU] = _("Staryu"),
    [SPECIES_STARMIE] = _("Starmie"),
    [SPECIES_MR_MIME] = _("Mr. Mime"),
    [SPECIES_SCYTHER] = _("Scyther"),
    [SPECIES_JYNX] = _("Jynx"),
    [SPECIES_ELECTABUZZ] = _("Electabuzz"),
    [SPECIES_MAGMAR] = _("Magmar"),
    [SPECIES_PINSIR] = _("Pinsir"),
    [SPECIES_TAUROS] = _("Tauros"),
    [SPECIES_MAGIKARP] = _("Magikarp"),
    [SPECIES_GYARADOS] = _("Gyarados"),
    [SPECIES_LAPRAS] = _("Lapras"),
    [SPECIES_DITTO] = _("Ditto"),
    [SPECIES_EEVEE] = _("Eevee"),
    [SPECIES_VAPOREON] = _("Vaporeon"),
    [SPECIES_JOLTEON] = _("Jolteon"),
    [SPECIES_FLAREON] = _("Flareon"),
    [SPECIES_PORYGON] = _("Porygon"),
    [SPECIES_OMANYTE] = _("Omanyte"),
    [SPECIES_OMASTAR] = _("Omastar"),
    [SPECIES_KABUTO] = _("Kabuto"),
    [SPECIES_KABUTOPS] = _("Kabutops"),
    [SPECIES_AERODACTYL] = _("Aerodactyl"),
    [SPECIES_SNORLAX] = _("Snorlax"),
    [SPECIES_ARTICUNO] = _("Articuno"),
    [SPECIES_ZAPDOS] = _("Zapdos"),
    [SPECIES_MOLTRES] = _("Moltres"),
    [SPECIES_DRATINI] = _("Dratini"),
    [SPECIES_DRAGONAIR] = _("Dragonair"),
    [SPECIES_DRAGONITE] = _("Dragonite"),
    [SPECIES_MEWTWO] = _("Mewtwo"),
    [SPECIES_MEW] = _("Mew"),
    [SPECIES_CHIKORITA] = _("Chikorita"),
    [SPECIES_BAYLEEF] = _("Bayleef"),
    [SPECIES_MEGANIUM] = _("Meganium"),
    [SPECIES_CYNDAQUIL] = _("Cyndaquil"),
    [SPECIES_QUILAVA] = _("Quilava"),
    [SPECIES_TYPHLOSION] = _("Typhlosion"),
    [SPECIES_TOTODILE] = _("Totodile"),
    [SPECIES_CROCONAW] = _("Croconaw"),
    [SPECIES_FERALIGATR] = _("Feraligatr"),
    [SPECIES_SENTRET] = _("Sentret"),
    [SPECIES_FURRET] = _("Furret"),
    [SPECIES_HOOTHOOT] = _("Hoothoot"),
    [SPECIES_NOCTOWL] = _("Noctowl"),
    [SPECIES_LEDYBA] = _("Ledyba"),
    [SPECIES_LEDIAN] = _("Ledian"),
    [SPECIES_SPINARAK] = _("Spinarak"),
    [SPECIES_ARIADOS] = _("Ariados"),
    [SPECIES_CROBAT] = _("Crobat"),
    [SPECIES_CHINCHOU] = _("Chinchou"),
    [SPECIES_LANTURN] = _("Lanturn"),
    [SPECIES_PICHU] = _("Pichu"),
    [SPECIES_CLEFFA] = _("Cleffa"),
    [SPECIES_IGGLYBUFF] = _("Igglybuff"),
    [SPECIES_TOGEPI] = _("Togepi"),
    [SPECIES_TOGETIC] = _("Togetic"),
    [SPECIES_NATU] = _("Natu"),
    [SPECIES_XATU] = _("Xatu"),
    [SPECIES_MAREEP] = _("Mareep"),
    [SPECIES_FLAAFFY] = _("Flaaffy"),
    [SPECIES_AMPHAROS] = _("Ampharos"),
    [SPECIES_BELLOSSOM] = _("Bellossom"),
    [SPECIES_MARILL] = _("Marill"),
    [SPECIES_AZUMARILL] = _("Azumarill"),
    [SPECIES_SUDOWOODO] = _("Sudowoodo"),
    [SPECIES_POLITOED] = _("Politoed"),
    [SPECIES_HOPPIP] = _("Hoppip"),
    [SPECIES_SKIPLOOM] = _("Skiploom"),
    [SPECIES_JUMPLUFF] = _("Jumpluff"),
    [SPECIES_AIPOM] = _("Aipom"),
    [SPECIES_SUNKERN] = _("Sunkern"),
    [SPECIES_SUNFLORA] = _("Sunflora"),
    [SPECIES_YANMA] = _("Yanma"),
    [SPECIES_WOOPER] = _("Wooper"),
    [SPECIES_QUAGSIRE] = _("Quagsire"),
    [SPECIES_ESPEON] = _("Espeon"),
    [SPECIES_UMBREON] = _("Umbreon"),
    [SPECIES_MURKROW] = _("Murkrow"),
    [SPECIES_SLOWKING] = _("Slowking"),
    [SPECIES_MISDREAVUS] = _("Misdreavus"),
    [SPECIES_UNOWN] = _("Unown"),
    [SPECIES_WOBBUFFET] = _("Wobbuffet"),
    [SPECIES_GIRAFARIG] = _("Girafarig"),
    [SPECIES_PINECO] = _("Pineco"),
    [SPECIES_FORRETRESS] = _("Forretress"),
    [SPECIES_DUNSPARCE] = _("Dunsparce"),
    [SPECIES_GLIGAR] = _("Gligar"),
    [SPECIES_STEELIX] = _("Steelix"),
    [SPECIES_SNUBBULL] = _("Snubbull"),
    [SPECIES_GRANBULL] = _("Granbull"),
    [SPECIES_QWILFISH] = _("Qwilfish"),
    [SPECIES_SCIZOR] = _("Scizor"),
    [SPECIES_SHUCKLE] = _("Shuckle"),
    [SPECIES_HERACROSS] = _("Heracross"),
    [SPECIES_SNEASEL] = _("Sneasel"),
    [SPECIES_TEDDIURSA] = _("Teddiursa"),
    [SPECIES_URSARING] = _("Ursaring"),
    [SPECIES_SLUGMA] = _("Slugma"),
    [SPECIES_MAGCARGO] = _("Magcargo"),
    [SPECIES_SWINUB] = _("Swinub"),
    [SPECIES_PILOSWINE] = _("Piloswine"),
    [SPECIES_CORSOLA] = _("Corsola"),
    [SPECIES_REMORAID] = _("Remoraid"),
    [SPECIES_OCTILLERY] = _("Octillery"),
    [SPECIES_DELIBIRD] = _("Delibird"),
    [SPECIES_MANTINE] = _("Mantine"),
    [SPECIES_SKARMORY] = _("Skarmory"),
    [SPECIES_HOUNDOUR] = _("Houndour"),
    [SPECIES_HOUNDOOM] = _("Houndoom"),
    [SPECIES_KINGDRA] = _("Kingdra"),
    [SPECIES_PHANPY] = _("Phanpy"),
    [SPECIES_DONPHAN] = _("Donphan"),
    [SPECIES_PORYGON2] = _("Porygon2"),
    [SPECIES_STANTLER] = _("Stantler"),
    [SPECIES_SMEARGLE] = _("Smeargle"),
    [SPECIES_TYROGUE] = _("Tyrogue"),
    [SPECIES_HITMONTOP] = _("Hitmontop"),
    [SPECIES_SMOOCHUM] = _("Smoochum"),
    [SPECIES_ELEKID] = _("Elekid"),
    [SPECIES_MAGBY] = _("Magby"),
    [SPECIES_MILTANK] = _("Miltank"),
    [SPECIES_BLISSEY] = _("Blissey"),
    [SPECIES_RAIKOU] = _("Raikou"),
    [SPECIES_ENTEI] = _("Entei"),
    [SPECIES_SUICUNE] = _("Suicune"),
    [SPECIES_LARVITAR] = _("Larvitar"),
    [SPECIES_PUPITAR] = _("Pupitar"),
    [SPECIES_TYRANITAR] = _("Tyranitar"),
    [SPECIES_LUGIA] = _("Lugia"),
    [SPECIES_HO_OH] = _("Ho-Oh"),
    [SPECIES_CELEBI] = _("Celebi"),
    [SPECIES_TREECKO] = _("Treecko"),
    [SPECIES_GROVYLE] = _("Grovyle"),
    [SPECIES_SCEPTILE] = _("Sceptile"),
    [SPECIES_TORCHIC] = _("Torchic"),
    [SPECIES_COMBUSKEN] = _("Combusken"),
    [SPECIES_BLAZIKEN] = _("Blaziken"),
    [SPECIES_MUDKIP] = _("Mudkip"),
    [SPECIES_MARSHTOMP] = _("Marshtomp"),
    [SPECIES_SWAMPERT] = _("Swampert"),
    [SPECIES_POOCHYENA] = _("Poochyena"),
    [SPECIES_MIGHTYENA] = _("Mightyena"),
    [SPECIES_ZIGZAGOON] = _("Zigzagoon"),
    [SPECIES_LINOONE] = _("Linoone"),
    [SPECIES_WURMPLE] = _("Wurmple"),
    [SPECIES_SILCOON] = _("Silcoon"),
    [SPECIES_BEAUTIFLY] = _("Beautifly"),
    [SPECIES_CASCOON] = _("Cascoon"),
    [SPECIES_DUSTOX] = _("Dustox"),
    [SPECIES_LOTAD] = _("Lotad"),
    [SPECIES_LOMBRE] = _("Lombre"),
    [SPECIES_LUDICOLO] = _("Ludicolo"),
    [SPECIES_SEEDOT] = _("Seedot"),
    [SPECIES_NUZLEAF] = _("Nuzleaf"),
    [SPECIES_SHIFTRY] = _("Shiftry"),
    [SPECIES_TAILLOW] = _("Taillow"),
    [SPECIES_SWELLOW] = _("Swellow"),
    [SPECIES_WINGULL] = _("Wingull"),
    [SPECIES_PELIPPER] = _("Pelipper"),
    [SPECIES_RALTS] = _("Ralts"),
    [SPECIES_KIRLIA] = _("Kirlia"),
    [SPECIES_GARDEVOIR] = _("Gardevoir"),
    [SPECIES_SURSKIT] = _("Surskit"),
    [SPECIES_MASQUERAIN] = _("Masquerain"),
    [SPECIES_SHROOMISH] = _("Shroomish"),
    [SPECIES_BRELOOM] = _("Breloom"),
    [SPECIES_SLAKOTH] = _("Slakoth"),
    [SPECIES_VIGOROTH] = _("Vigoroth"),
    [SPECIES_SLAKING] = _("Slaking"),
    [SPECIES_NINCADA] = _("Nincada"),
    [SPECIES_NINJASK] = _("Ninjask"),
    [SPECIES_SHEDINJA] = _("Shedinja"),
    [SPECIES_WHISMUR] = _("Whismur"),
    [SPECIES_LOUDRED] = _("Loudred"),
    [SPECIES_EXPLOUD] = _("Exploud"),
    [SPECIES_MAKUHITA] = _("Makuhita"),
    [SPECIES_HARIYAMA] = _("Hariyama"),
    [SPECIES_AZURILL] = _("Azurill"),
    [SPECIES_NOSEPASS] = _("Nosepass"),
    [SPECIES_SKITTY] = _("Skitty"),
    [SPECIES_DELCATTY] = _("Delcatty"),
    [SPECIES_SABLEYE] = _("Sableye"),
    [SPECIES_MAWILE] = _("Mawile"),
    [SPECIES_ARON] = _("Aron"),
    [SPECIES_LAIRON] = _("Lairon"),
    [SPECIES_AGGRON] = _("Aggron"),
    [SPECIES_MEDITITE] = _("Meditite"),
    [SPECIES_MEDICHAM] = _("Medicham"),
    [SPECIES_ELECTRIKE] = _("Electrike"),
    [SPECIES_MANECTRIC] = _("Manectric"),
    [SPECIES_PLUSLE] = _("Plusle"),
    [SPECIES_MINUN] = _("Minun"),
    [SPECIES_VOLBEAT] = _("Volbeat"),
    [SPECIES_ILLUMISE] = _("Illumise"),
    [SPECIES_ROSELIA] = _("Roselia"),
    [SPECIES_GULPIN] = _("Gulpin"),
    [SPECIES_SWALOT] = _("Swalot"),
    [SPECIES_CARVANHA] = _("Carvanha"),
    [SPECIES_SHARPEDO] = _("Sharpedo"),
    [SPECIES_WAILMER] = _("Wailmer"),
    [SPECIES_WAILORD] = _("Wailord"),
    [SPECIES_NUMEL] = _("Numel"),
    [SPECIES_CAMERUPT] = _("Camerupt"),
    [SPECIES_TORKOAL] = _("Torkoal"),
    [SPECIES_SPOINK] = _("Spoink"),
    [SPECIES_GRUMPIG] = _("Grumpig"),
    [SPECIES_SPINDA] = _("Spinda"),
    [SPECIES_TRAPINCH] = _("Trapinch"),
    [SPECIES_VIBRAVA] = _("Vibrava"),
    [SPECIES_FLYGON] = _("Flygon"),
    [SPECIES_CACNEA] = _("Cacnea"),
    [SPECIES_CACTURNE] = _("Cacturne"),
    [SPECIES_SWABLU] = _("Swablu"),
    [SPECIES_ALTARIA] = _("Altaria"),
    [SPECIES_ZANGOOSE] = _("Zangoose"),
    [SPECIES_SEVIPER] = _("Seviper"),
    [SPECIES_LUNATONE] = _("Lunatone"),
    [SPECIES_SOLROCK] = _("Solrock"),
    [SPECIES_BARBOACH] = _("Barboach"),
    [SPECIES_WHISCASH] = _("Whiscash"),
    [SPECIES_CORPHISH] = _("Corphish"),
    [SPECIES_CRAWDAUNT] = _("Crawdaunt"),
    [SPECIES_BALTOY] = _("Baltoy"),
    [SPECIES_CLAYDOL] = _("Claydol"),
    [SPECIES_LILEEP] = _("Lileep"),
    [SPECIES_CRADILY] = _("Cradily"),
    [SPECIES_ANORITH] = _("Anorith"),
    [SPECIES_ARMALDO] = _("Armaldo"),
    [SPECIES_FEEBAS] = _("Feebas"),
    [SPECIES_MILOTIC] = _("Milotic"),
    [SPECIES_CASTFORM] = _("Castform"),
    [SPECIES_KECLEON] = _("Kecleon"),
    [SPECIES_SHUPPET] = _("Shuppet"),
    [SPECIES_BANETTE] = _("Banette"),
    [SPECIES_DUSKULL] = _("Duskull"),
    [SPECIES_DUSCLOPS] = _("Dusclops"),
    [SPECIES_TROPIUS] = _("Tropius"),
    [SPECIES_CRYSTAL_ONIX] = _("C. Onix"),
    [SPECIES_ABSOL] = _("Absol"),
    [SPECIES_WYNAUT] = _("Wynaut"),
    [SPECIES_SNORUNT] = _("Snorunt"),
    [SPECIES_GLALIE] = _("Glalie"),
    [SPECIES_SPHEAL] = _("Spheal"),
    [SPECIES_SEALEO] = _("Sealeo"),
    [SPECIES_WALREIN] = _("Walrein"),
    [SPECIES_CLAMPERL] = _("Clamperl"),
    [SPECIES_HUNTAIL] = _("Huntail"),
    [SPECIES_GOREBYSS] = _("Gorebyss"),
    [SPECIES_RELICANTH] = _("Relicanth"),
    [SPECIES_LUVDISC] = _("Luvdisc"),
    [SPECIES_BAGON] = _("Bagon"),
    [SPECIES_SHELGON] = _("Shelgon"),
    [SPECIES_SALAMENCE] = _("Salamence"),
    [SPECIES_BELDUM] = _("Beldum"),
    [SPECIES_METANG] = _("Metang"),
    [SPECIES_METAGROSS] = _("Metagross"),
    [SPECIES_REGIROCK] = _("Regirock"),
    [SPECIES_REGICE] = _("Regice"),
    [SPECIES_REGISTEEL] = _("Registeel"),
    [SPECIES_LATIAS] = _("Latias"),
    [SPECIES_LATIOS] = _("Latios"),
    [SPECIES_KYOGRE] = _("Kyogre"),
    [SPECIES_GROUDON] = _("Groudon"),
    [SPECIES_RAYQUAZA] = _("Rayquaza"),
    [SPECIES_JIRACHI] = _("Jirachi"),
    [SPECIES_DEOXYS] = _("Deoxys"),
    [SPECIES_CHIMECHO] = _("Chimecho"),
    [SPECIES_TURTWIG] = _("Turtwig"),
    [SPECIES_GROTLE] = _("Grotle"),
    [SPECIES_TORTERRA] = _("Torterra"),
    [SPECIES_CHIMCHAR] = _("Chimchar"),
    [SPECIES_MONFERNO] = _("Monferno"),
    [SPECIES_INFERNAPE] = _("Infernape"),
    [SPECIES_PIPLUP] = _("Piplup"),
    [SPECIES_PRINPLUP] = _("Prinplup"),
    [SPECIES_EMPOLEON] = _("Empoleon"),
    [SPECIES_STARLY] = _("Starly"),
    [SPECIES_STARAVIA] = _("Staravia"),
    [SPECIES_STARAPTOR] = _("Staraptor"),
    [SPECIES_BIDOOF] = _("Bidoof"),
    [SPECIES_BIBAREL] = _("Bibarel"),
    [SPECIES_KRICKETOT] = _("Kricketot"),
    [SPECIES_KRICKETUNE] = _("Kricketune"),
    [SPECIES_SHINX] = _("Shinx"),
    [SPECIES_LUXIO] = _("Luxio"),
    [SPECIES_LUXRAY] = _("Luxray"),
    [SPECIES_BUDEW] = _("Budew"),
    [SPECIES_ROSERADE] = _("Roserade"),
    [SPECIES_CRANIDOS] = _("Cranidos"),
    [SPECIES_RAMPARDOS] = _("Rampardos"),
    [SPECIES_SHIELDON] = _("Shieldon"),
    [SPECIES_BASTIODON] = _("Bastiodon"),
    [SPECIES_BURMY] = _("Burmy"),
    [SPECIES_BURMY_SANDY] = _("Burmy"),
    [SPECIES_BURMY_TRASH] = _("Burmy"),
    [SPECIES_WORMADAM] = _("Wormadam"),
    [SPECIES_WORMADAM_SANDY] = _("Wormadam"),
    [SPECIES_WORMADAM_TRASH] = _("Wormadam"),
    [SPECIES_MOTHIM] = _("Mothim"),
    [SPECIES_COMBEE] = _("Combee"),
    [SPECIES_VESPIQUEN] = _("Vespiquen"),
    [SPECIES_PACHIRISU] = _("Pachirisu"),
    [SPECIES_BUIZEL] = _("Buizel"),
    [SPECIES_FLOATZEL] = _("Floatzel"),
    [SPECIES_CHERUBI] = _("Cherubi"),
    [SPECIES_CHERRIM] = _("Cherrim"),
    [SPECIES_SHELLOS] = _("Shellos"),
    [SPECIES_GASTRODON] = _("Gastrodon"),
    [SPECIES_AMBIPOM] = _("Ambipom"),
    [SPECIES_DRIFLOON] = _("Drifloon"),
    [SPECIES_DRIFBLIM] = _("Drifblim"),
    [SPECIES_BUNEARY] = _("Buneary"),
    [SPECIES_LOPUNNY] = _("Lopunny"),
    [SPECIES_MISMAGIUS] = _("Mismagius"),
    [SPECIES_HONCHKROW] = _("Honchkrow"),
    [SPECIES_GLAMEOW] = _("Glameow"),
    [SPECIES_PURUGLY] = _("Purugly"),
    [SPECIES_CHINGLING] = _("Chingling"),
    [SPECIES_STUNKY] = _("Stunky"),
    [SPECIES_SKUNTANK] = _("Skuntank"),
    [SPECIES_BRONZOR] = _("Bronzor"),
    [SPECIES_BRONZONG] = _("Bronzong"),
    [SPECIES_BONSLY] = _("Bonsly"),
    [SPECIES_MIMEJR] = _("Mime jr."),
    [SPECIES_HAPPINY] = _("Happiny"),
    [SPECIES_CHATOT] = _("Chatot"),
    [SPECIES_SPIRITOMB] = _("Spiritomb"),
    [SPECIES_GIBLE] = _("Gible"),
    [SPECIES_GABITE] = _("Gabite"),
    [SPECIES_GARCHOMP] = _("Garchomp"),
    [SPECIES_MUNCHLAX] = _("Munchlax"),
    [SPECIES_RIOLU] = _("Riolu"),
    [SPECIES_LUCARIO] = _("Lucario"),
    [SPECIES_HIPPOPOTAS] = _("Hippopotas"),
    [SPECIES_HIPPOWDON] = _("Hippowdon"),
    [SPECIES_SKORUPI] = _("Skorupi"),
    [SPECIES_DRAPION] = _("Drapion"),
    [SPECIES_CROAGUNK] = _("Croagunk"),
    [SPECIES_TOXICROAK] = _("Toxicroak"),
    [SPECIES_CARNIVINE] = _("Carnivine"),
    [SPECIES_FINNEON] = _("Finneon"),
    [SPECIES_LUMINEON] = _("Lumineon"),
    [SPECIES_MANTYKE] = _("Mantyke"),
    [SPECIES_SNOVER] = _("Snover"),
    [SPECIES_ABOMASNOW] = _("Abomasnow"),
    [SPECIES_WEAVILE] = _("Weavile"),
    [SPECIES_MAGNEZONE] = _("Magnezone"),
    [SPECIES_LICKILICKY] = _("Lickilicky"),
    [SPECIES_RHYPERIOR] = _("Rhyperior"),
    [SPECIES_TANGROWTH] = _("Tangrowth"),
    [SPECIES_ELECTIVIRE] = _("Electivire"),
    [SPECIES_MAGMORTAR] = _("Magmortar"),
    [SPECIES_TOGEKISS] = _("Togekiss"),
    [SPECIES_YANMEGA] = _("Yanmega"),
    [SPECIES_LEAFEON] = _("Leafeon"),
    [SPECIES_GLACEON] = _("Glaceon"),
    [SPECIES_GLISCOR] = _("Gliscor"),
    [SPECIES_MAMOSWINE] = _("Mamoswine"),
    [SPECIES_PORYGON_Z] = _("Porygon-z"),
    [SPECIES_GALLADE] = _("Gallade"),
    [SPECIES_PROBOPASS] = _("Probopass"),
    [SPECIES_DUSKNOIR] = _("Dusknoir"),
    [SPECIES_FROSLASS] = _("Froslass"),
    [SPECIES_ROTOM] = _("Rotom"),
    [SPECIES_ROTOM_HEAT] = _("Rotom"),
    [SPECIES_ROTOM_FAN] = _("Rotom"),
    [SPECIES_ROTOM_FROST] = _("Rotom"),
    [SPECIES_ROTOM_MOW] = _("Rotom"),
    [SPECIES_ROTOM_WASH] = _("Rotom"),
    [SPECIES_UXIE] = _("Uxie"),
    [SPECIES_MESPRIT] = _("Mesprit"),
    [SPECIES_AZELF] = _("Azelf"),
    [SPECIES_DIALGA] = _("Dialga"),
    [SPECIES_PALKIA] = _("Palkia"),
    [SPECIES_HEATRAN] = _("Heatran"),
    [SPECIES_REGIGIGAS] = _("Regigigas"),
    [SPECIES_GIRATINA] = _("Giratina"),
    [SPECIES_CRESSELIA] = _("Cresselia"),
    [SPECIES_PHIONE] = _("Phione"),
    [SPECIES_MANAPHY] = _("Manaphy"),
    [SPECIES_DARKRAI] = _("Darkrai"),
    [SPECIES_SHAYMIN] = _("Shaymin"),
    [SPECIES_ARCEUS] = _("Arceus"),
    [SPECIES_VICTINI] = _("Victini"),
    [SPECIES_SNIVY] = _("Snivy"),
    [SPECIES_SERVINE] = _("Servine"),
    [SPECIES_SERPERIOR] = _("Serperior"),
    [SPECIES_TEPIG] = _("Tepig"),
    [SPECIES_PIGNITE] = _("Pignite"),
    [SPECIES_EMBOAR] = _("Emboar"),
    [SPECIES_OSHAWOTT] = _("Oshawott"),
    [SPECIES_DEWOTT] = _("Dewott"),
    [SPECIES_SAMUROTT] = _("Samurott"),
    [SPECIES_PATRAT] = _("Patrat"),
    [SPECIES_WATCHOG] = _("Watchog"),
    [SPECIES_LILLIPUP] = _("Lillipup"),
    [SPECIES_HERDIER] = _("Herdier"),
    [SPECIES_STOUTLAND] = _("Stoutland"),
    [SPECIES_PURRLOIN] = _("Purrloin"),
    [SPECIES_LIEPARD] = _("Liepard"),
    [SPECIES_PANSAGE] = _("Pansage"),
    [SPECIES_SIMISAGE] = _("Simisage"),
    [SPECIES_PANSEAR] = _("Pansear"),
    [SPECIES_SIMISEAR] = _("Simisear"),
    [SPECIES_PANPOUR] = _("Panpour"),
    [SPECIES_SIMIPOUR] = _("Simipour"),
    [SPECIES_MUNNA] = _("Munna"),
    [SPECIES_MUSHARNA] = _("Musharna"),
    [SPECIES_PIDOVE] = _("Pidove"),
    [SPECIES_TRANQUILL] = _("Tranquill"),
    [SPECIES_UNFEZANT] = _("Unfezant"),
    [SPECIES_BLITZLE] = _("Blitzle"),
    [SPECIES_ZEBSTRIKA] = _("Zebstrika"),
    [SPECIES_ROGGENROLA] = _("Roggenrola"),
    [SPECIES_BOLDORE] = _("Boldore"),
    [SPECIES_GIGALITH] = _("Gigalith"),
    [SPECIES_WOOBAT] = _("Woobat"),
    [SPECIES_SWOOBAT] = _("Swoobat"),
    [SPECIES_DRILBUR] = _("Drilbur"),
    [SPECIES_EXCADRILL] = _("Excadrill"),
    [SPECIES_AUDINO] = _("Audino"),
    [SPECIES_TIMBURR] = _("Timburr"),
    [SPECIES_GURDURR] = _("Gurdurr"),
    [SPECIES_CONKELDURR] = _("Conkeldurr"),
    [SPECIES_TYMPOLE] = _("Tympole"),
    [SPECIES_PALPITOAD] = _("Palpitoad"),
    [SPECIES_SEISMITOAD] = _("Seismitoad"),
    [SPECIES_THROH] = _("Throh"),
    [SPECIES_SAWK] = _("Sawk"),
    [SPECIES_SEWADDLE] = _("Sewaddle"),
    [SPECIES_SWADLOON] = _("Swadloon"),
    [SPECIES_LEAVANNY] = _("Leavanny"),
    [SPECIES_VENIPEDE] = _("Venipede"),
    [SPECIES_WHIRLIPEDE] = _("Whirlipede"),
    [SPECIES_SCOLIPEDE] = _("Scolipede"),
    [SPECIES_COTTONEE] = _("Cottonee"),
    [SPECIES_WHIMSICOTT] = _("Whimsicott"),
    [SPECIES_PETILIL] = _("Petilil"),
    [SPECIES_LILLIGANT] = _("Lilligant"),
    [SPECIES_BASCULIN] = _("Basculin"),
    [SPECIES_SANDILE] = _("Sandile"),
    [SPECIES_KROKOROK] = _("Krokorok"),
    [SPECIES_KROOKODILE] = _("Krookodile"),
    [SPECIES_DARUMAKA] = _("Darumaka"),
    [SPECIES_DARMANITAN] = _("Darmanitan"),
    [SPECIES_MARACTUS] = _("Maractus"),
    [SPECIES_DWEBBLE] = _("Dwebble"),
    [SPECIES_CRUSTLE] = _("Crustle"),
    [SPECIES_SCRAGGY] = _("Scraggy"),
    [SPECIES_SCRAFTY] = _("Scrafty"),
    [SPECIES_SIGILYPH] = _("Sigilyph"),
    [SPECIES_YAMASK] = _("Yamask"),
    [SPECIES_COFAGRIGUS] = _("Cofagrigus"),
    [SPECIES_TIRTOUGA] = _("Tirtouga"),
    [SPECIES_CARRACOSTA] = _("Carracosta"),
    [SPECIES_ARCHEN] = _("Archen"),
    [SPECIES_ARCHEOPS] = _("Archeops"),
    [SPECIES_TRUBBISH] = _("Trubbish"),
    [SPECIES_GARBODOR] = _("Garbodor"),
    [SPECIES_ZORUA] = _("Zorua"),
    [SPECIES_ZOROARK] = _("Zoroark"),
    [SPECIES_MINCCINO] = _("Minccino"),
    [SPECIES_CINCCINO] = _("Cinccino"),
    [SPECIES_GOTHITA] = _("Gothita"),
    [SPECIES_GOTHORITA] = _("Gothorita"),
    [SPECIES_GOTHITELLE] = _("Gothitelle"),
    [SPECIES_SOLOSIS] = _("Solosis"),
    [SPECIES_DUOSION] = _("Duosion"),
    [SPECIES_REUNICLUS] = _("Reuniclus"),
    [SPECIES_DUCKLETT] = _("Ducklett"),
    [SPECIES_SWANNA] = _("Swanna"),
    [SPECIES_VANILLITE] = _("Vanillite"),
    [SPECIES_VANILLISH] = _("Vanillish"),
    [SPECIES_VANILLUXE] = _("Vanilluxe"),
    [SPECIES_DEERLING] = _("Deerling"),
    [SPECIES_SAWSBUCK] = _("Sawsbuck"),
    [SPECIES_EMOLGA] = _("Emolga"),
    [SPECIES_KARRABLAST] = _("Karrablast"),
    [SPECIES_ESCAVALIER] = _("Escavalier"),
    [SPECIES_FOONGUS] = _("Foongus"),
    [SPECIES_AMOONGUSS] = _("Amoonguss"),
    [SPECIES_FRILLISH] = _("Frillish"),
    [SPECIES_JELLICENT] = _("Jellicent"),
    [SPECIES_ALOMOMOLA] = _("Alomomola"),
    [SPECIES_JOLTIK] = _("Joltik"),
    [SPECIES_GALVANTULA] = _("Galvantula"),
    [SPECIES_FERROSEED] = _("Ferroseed"),
    [SPECIES_FERROTHORN] = _("Ferrothorn"),
    [SPECIES_KLINK] = _("Klink"),
    [SPECIES_KLANG] = _("Klang"),
    [SPECIES_KLINKLANG] = _("Klinklang"),
    [SPECIES_TYNAMO] = _("Tynamo"),
    [SPECIES_EELEKTRIK] = _("Eelektrik"),
    [SPECIES_EELEKTROSS] = _("Eelektross"),
    [SPECIES_ELGYEM] = _("Elgyem"),
    [SPECIES_BEHEEYEM] = _("Beheeyem"),
    [SPECIES_LITWICK] = _("Litwick"),
    [SPECIES_LAMPENT] = _("Lampent"),
    [SPECIES_CHANDELURE] = _("Chandelure"),
    [SPECIES_AXEW] = _("Axew"),
    [SPECIES_FRAXURE] = _("Fraxure"),
    [SPECIES_HAXORUS] = _("Haxorus"),
    [SPECIES_CUBCHOO] = _("Cubchoo"),
    [SPECIES_BEARTIC] = _("Beartic"),
    [SPECIES_CRYOGONAL] = _("Cryogonal"),
    [SPECIES_SHELMET] = _("Shelmet"),
    [SPECIES_ACCELGOR] = _("Accelgor"),
    [SPECIES_STUNFISK] = _("Stunfisk"),
    [SPECIES_MIENFOO] = _("Mienfoo"),
    [SPECIES_MIENSHAO] = _("Mienshao"),
    [SPECIES_DRUDDIGON] = _("Druddigon"),
    [SPECIES_GOLETT] = _("Golett"),
    [SPECIES_GOLURK] = _("Golurk"),
    [SPECIES_PAWNIARD] = _("Pawniard"),
    [SPECIES_BISHARP] = _("Bisharp"),
    [SPECIES_BOUFFALANT] = _("Bouffalant"),
    [SPECIES_RUFFLET] = _("Rufflet"),
    [SPECIES_BRAVIARY] = _("Braviary"),
    [SPECIES_VULLABY] = _("Vullaby"),
    [SPECIES_MANDIBUZZ] = _("Mandibuzz"),
    [SPECIES_HEATMOR] = _("Heatmor"),
    [SPECIES_DURANT] = _("Durant"),
    [SPECIES_DEINO] = _("Deino"),
    [SPECIES_ZWEILOUS] = _("Zweilous"),
    [SPECIES_HYDREIGON] = _("Hydreigon"),
    [SPECIES_LARVESTA] = _("Larvesta"),
    [SPECIES_VOLCARONA] = _("Volcarona"),
    [SPECIES_COBALION] = _("Cobalion"),
    [SPECIES_TERRAKION] = _("Terrakion"),
    [SPECIES_VIRIZION] = _("Virizion"),
    [SPECIES_TORNADUS] = _("Tornadus"),
    [SPECIES_THUNDURUS] = _("Thundurus"),
    [SPECIES_RESHIRAM] = _("Reshiram"),
    [SPECIES_ZEKROM] = _("Zekrom"),
    [SPECIES_LANDORUS] = _("Landorus"),
    [SPECIES_KYUREM] = _("Kyurem"),
    [SPECIES_KYUREM_BLACK] = _("Kyurem"),
    [SPECIES_KYUREM_WHITE] = _("Kyurem"),
    [SPECIES_KELDEO] = _("Keldeo"),
    [SPECIES_MELOETTA] = _("Meloetta"),
    [SPECIES_GENESECT] = _("Genesect"),
    [SPECIES_CHESPIN] = _("Chespin"),
    [SPECIES_QUILLADIN] = _("Quilladin"),
    [SPECIES_CHESNAUGHT] = _("Chesnaught"),
    [SPECIES_FENNEKIN] = _("Fennekin"),
    [SPECIES_BRAIXEN] = _("Braixen"),
    [SPECIES_DELPHOX] = _("Delphox"),
    [SPECIES_FROAKIE] = _("Froakie"),
    [SPECIES_FROGADIER] = _("Frogadier"),
    [SPECIES_GRENINJA] = _("Greninja"),
    [SPECIES_BUNNELBY] = _("Bunnelby"),
    [SPECIES_DIGGERSBY] = _("Diggersby"),
    [SPECIES_FLETCHLING] = _("Fletchling"),
    [SPECIES_FLETCHINDER] = _("Flechinder"),
    [SPECIES_TALONFLAME] = _("Talonflame"),
    [SPECIES_SCATTERBUG] = _("Scatterbug"),
    [SPECIES_SPEWPA] = _("Spewpa"),
    [SPECIES_VIVILLON] = _("Vivillon"),
    [SPECIES_LITLEO] = _("Litleo"),
    [SPECIES_PYROAR] = _("Pyroar"),
    [SPECIES_FLABEBE] = _("Flabébé"),
    [SPECIES_FLOETTE] = _("Floette"),
    [SPECIES_FLORGES] = _("Florges"),
    [SPECIES_SKIDDO] = _("Skiddo"),
    [SPECIES_GOGOAT] = _("Gogoat"),
    [SPECIES_PANCHAM] = _("Pancham"),
    [SPECIES_PANGORO] = _("Pangoro"),
    [SPECIES_FURFROU] = _("Furfrou"),
    [SPECIES_ESPURR] = _("Espurr"),
    [SPECIES_MEOWSTIC] = _("Meowstic"),
    [SPECIES_MEOWSTIC_F] = _("Meowstic"),
    [SPECIES_HONEDGE] = _("Honedge"),
    [SPECIES_DOUBLADE] = _("Doublade"),
    [SPECIES_AEGISLASH] = _("Aegislash"),
    [SPECIES_SPRITZEE] = _("Spritzee"),
    [SPECIES_AROMATISSE] = _("Aromatisse"),
    [SPECIES_SWIRLIX] = _("Swirlix"),
    [SPECIES_SLURPUFF] = _("Slurpuff"),
    [SPECIES_INKAY] = _("Inkay"),
    [SPECIES_MALAMAR] = _("Malamar"),
    [SPECIES_BINACLE] = _("Binacle"),
    [SPECIES_BARBARACLE] = _("Barbaracle"),
    [SPECIES_SKRELP] = _("Skrelp"),
    [SPECIES_DRAGALGE] = _("Dragalge"),
    [SPECIES_CLAUNCHER] = _("Clauncher"),
    [SPECIES_CLAWITZER] = _("Clawitzer"),
    [SPECIES_HELIOPTILE] = _("Helioptile"),
    [SPECIES_HELIOLISK] = _("Heliolisk"),
    [SPECIES_TYRUNT] = _("Tyrunt"),
    [SPECIES_TYRANTRUM] = _("Tyrantrum"),
    [SPECIES_AMAURA] = _("Amaura"),
    [SPECIES_AURORUS] = _("Aurorus"),
    [SPECIES_SYLVEON] = _("Sylveon"),
    [SPECIES_HAWLUCHA] = _("Hawlucha"),
    [SPECIES_DEDENNE] = _("Dedenne"),
    [SPECIES_CARBINK] = _("Carbink"),
    [SPECIES_GOOMY] = _("Goomy"),
    [SPECIES_SLIGGOO] = _("Sliggoo"),
    [SPECIES_GOODRA] = _("Goodra"),
    [SPECIES_KLEFKI] = _("Klefki"),
    [SPECIES_PHANTUMP] = _("Phantump"),
    [SPECIES_TREVENANT] = _("Trevenant"),
    [SPECIES_PUMPKABOO] = _("Pumpkaboo"),
    [SPECIES_GOURGEIST] = _("Gourgeist"),
    [SPECIES_BERGMITE] = _("Bergmite"),
    [SPECIES_AVALUGG] = _("Avalugg"),
    [SPECIES_NOIBAT] = _("Noibat"),
    [SPECIES_NOIVERN] = _("Noivern"),
    [SPECIES_XERNEAS] = _("Xerneas"),
    [SPECIES_YVELTAL] = _("Yveltal"),
    [SPECIES_ZYGARDE] = _("Zygarde"),
    [SPECIES_DIANCIE] = _("Diancie"),
    [SPECIES_HOOPA] = _("Hoopa"),
    [SPECIES_VOLCANION] = _("Volcanion"),
    [SPECIES_ROWLET] = _("Rowlet"),
    [SPECIES_DARTRIX] = _("Dartrix"),
    [SPECIES_DECIDUEYE] = _("Decidueye"),
    [SPECIES_LITTEN] = _("Litten"),
    [SPECIES_TORRACAT] = _("Torracat"),
    [SPECIES_INCINEROAR] = _("Incineroar"),
    [SPECIES_POPPLIO] = _("Popplio"),
    [SPECIES_BRIONNE] = _("Brionne"),
    [SPECIES_PRIMARINA] = _("Primarina"),
    [SPECIES_PIKIPEK] = _("Pikipek"),
    [SPECIES_TRUMBEAK] = _("Trumbeak"),
    [SPECIES_TOUCANNON] = _("Toucannon"),
    [SPECIES_YUNGOOS] = _("Yungoos"),
    [SPECIES_GUMSHOOS] = _("Gumshoos"),
    [SPECIES_GRUBBIN] = _("Grubbin"),
    [SPECIES_CHARJABUG] = _("Charjabug"),
    [SPECIES_VIKAVOLT] = _("Vikavolt"),
    [SPECIES_CRABRAWLER] = _("Crabrawler"),
    [SPECIES_CRABOMINABLE] = _("Crabminabl"),
    [SPECIES_ORICORIO] = _("Oricorio"),
    [SPECIES_CUTIEFLY] = _("Cutiefly"),
    [SPECIES_RIBOMBEE] = _("Ribombee"),
    [SPECIES_ROCKRUFF] = _("Rockruff"),
    [SPECIES_LYCANROC] = _("Lycanroc"),
    [SPECIES_WISHIWASHI] = _("Wishiwashi"),
    [SPECIES_MAREANIE] = _("Mareanie"),
    [SPECIES_TOXAPEX] = _("Toxapex"),
    [SPECIES_MUDBRAY] = _("Mudbray"),
    [SPECIES_MUDSDALE] = _("Mudsdale"),
    [SPECIES_DEWPIDER] = _("Dewpider"),
    [SPECIES_ARAQUANID] = _("Araquanid"),
    [SPECIES_FOMANTIS] = _("Fomantis"),
    [SPECIES_LURANTIS] = _("Lurantis"),
    [SPECIES_MORELULL] = _("Morelull"),
    [SPECIES_SHIINOTIC] = _("Shiinotic"),
    [SPECIES_SALANDIT] = _("Salandit"),
    [SPECIES_SALAZZLE] = _("Salazzle"),
    [SPECIES_STUFFUL] = _("Stufful"),
    [SPECIES_BEWEAR] = _("Bewear"),
    [SPECIES_BOUNSWEET] = _("Bounsweet"),
    [SPECIES_STEENEE] = _("Steenee"),
    [SPECIES_TSAREENA] = _("Tsareena"),
    [SPECIES_COMFEY] = _("Comfey"),
    [SPECIES_ORANGURU] = _("Oranguru"),
    [SPECIES_PASSIMIAN] = _("Passimian"),
    [SPECIES_WIMPOD] = _("Wimpod"),
    [SPECIES_GOLISOPOD] = _("Golisopod"),
    [SPECIES_SANDYGAST] = _("Sandygast"),
    [SPECIES_PALOSSAND] = _("Palossand"),
    [SPECIES_PYUKUMUKU] = _("Pyukumuku"),
    [SPECIES_TYPE_NULL] = _("Type: Null"),
    [SPECIES_SILVALLY] = _("Silvally"),
    [SPECIES_MINIOR] = _("Minior"),
    [SPECIES_KOMALA] = _("Komala"),
    [SPECIES_TURTONATOR] = _("Turtonator"),
    [SPECIES_TOGEDEMARU] = _("Togedemaru"),
    [SPECIES_MIMIKYU] = _("Mimikyu"),
    [SPECIES_BRUXISH] = _("Bruxish"),
    [SPECIES_DRAMPA] = _("Drampa"),
    [SPECIES_DHELMISE] = _("Dhelmise"),
    [SPECIES_JANGMO_O] = _("Jangmo-o"),
    [SPECIES_HAKAMO_O] = _("Hakamo-o"),
    [SPECIES_KOMMO_O] = _("Kommo-o"),
    [SPECIES_TAPU_KOKO] = _("Tapu Koko"),
    [SPECIES_TAPU_LELE] = _("Tapu Lele"),
    [SPECIES_TAPU_BULU] = _("Tapu Bulu"),
    [SPECIES_TAPU_FINI] = _("Tapu Fini"),
    [SPECIES_COSMOG] = _("Cosmog"),
    [SPECIES_COSMOEM] = _("Cosmoem"),
    [SPECIES_SOLGALEO] = _("Solgaleo"),
    [SPECIES_LUNALA] = _("Lunala"),
    [SPECIES_NIHILEGO] = _("Nihilego"),
    [SPECIES_BUZZWOLE] = _("Buzzwole"),
    [SPECIES_PHEROMOSA] = _("Pheromosa"),
    [SPECIES_XURKITREE] = _("Xurkitree"),
    [SPECIES_CELESTEELA] = _("Celesteela"),
    [SPECIES_KARTANA] = _("Kartana"),
    [SPECIES_GUZZLORD] = _("Guzzlord"),
    [SPECIES_NECROZMA] = _("Necrozma"),
    [SPECIES_MAGEARNA] = _("Magearna"),
    [SPECIES_MARSHADOW] = _("Marshadow"),
    [SPECIES_POIPOLE] = _("Poipole"),
    [SPECIES_NAGANADEL] = _("Naganadel"),
    [SPECIES_STAKATAKA] = _("Stakataka"),
    [SPECIES_BLACEPHALON] = _("Blacefalon"),
    [SPECIES_ZERAORA] = _("Zeraora"),
    [SPECIES_CRYSTAL_ONIX] = _("C. Onix"),
    [SPECIES_MELTAN] = _("Meltan"),
    [SPECIES_MELMETAL] = _("Melmetal"),

    [SPECIES_MEGA_VENUSAUR] = _("Venusaur"),
    [SPECIES_MEGA_CHARIZARD_X] = _("Charizard"),
    [SPECIES_MEGA_CHARIZARD_Y] = _("Charizard"),
    [SPECIES_MEGA_BLASTOISE] = _("Blastoise"),
    [SPECIES_MEGA_BEEDRILL] = _("Beedrill"),
    [SPECIES_MEGA_PIDGEOT] = _("Pidgeot"),
    [SPECIES_MEGA_ALAKAZAM] = _("Alakazam"),
    [SPECIES_MEGA_SLOWBRO] = _("Slowbro"),
    [SPECIES_MEGA_GENGAR] = _("Gengar"),
    [SPECIES_MEGA_KANGASKHAN] = _("Kangaskhan"),
    [SPECIES_MEGA_PINSIR] = _("Pinsir"),
    [SPECIES_MEGA_GYARADOS] = _("Gyarados"),
    [SPECIES_MEGA_AERODACTYL] = _("Aerodactyl"),
    [SPECIES_MEGA_MEWTWO_X] = _("Mewtwo"),
    [SPECIES_MEGA_MEWTWO_Y] = _("Mewtwo"),
    [SPECIES_MEGA_AMPHAROS] = _("Ampharos"),
    [SPECIES_MEGA_STEELIX] = _("Steelix"),
    [SPECIES_MEGA_SCIZOR] = _("Scizor"),
    [SPECIES_MEGA_HERACROSS] = _("Heracross"),
    [SPECIES_MEGA_HOUNDOOM] = _("Houndoom"),
    [SPECIES_MEGA_TYRANITAR] = _("Tyranitar"),
    [SPECIES_MEGA_SCEPTILE] = _("Sceptile"),
    [SPECIES_MEGA_BLAZIKEN] = _("Blaziken"),
    [SPECIES_MEGA_SWAMPERT] = _("Swampert"),
    [SPECIES_MEGA_GARDEVOIR] = _("Gardevoir"),
    [SPECIES_MEGA_SABLEYE] = _("Sableye"),
    [SPECIES_MEGA_MAWILE] = _("Mawile"),
    [SPECIES_MEGA_AGGRON] = _("Aggron"),
    [SPECIES_MEGA_MEDICHAM] = _("Medicham"),
    [SPECIES_MEGA_MANECTRIC] = _("Manectric"),
    [SPECIES_MEGA_SHARPEDO] = _("Sharpedo"),
    [SPECIES_MEGA_CAMERUPT] = _("Camerupt"),
    [SPECIES_MEGA_ALTARIA] = _("Altaria"),
    [SPECIES_MEGA_BANETTE] = _("Banette"),
    [SPECIES_MEGA_ABSOL] = _("Absol"),
    [SPECIES_MEGA_GLALIE] = _("Glalie"),
    [SPECIES_MEGA_SALAMENCE] = _("Salamence"),
    [SPECIES_MEGA_METAGROSS] = _("Metagross"),
    [SPECIES_MEGA_LATIAS] = _("Latias"),
    [SPECIES_MEGA_LATIOS] = _("Latios"),
    [SPECIES_PRIMAL_KYOGRE] = _("Kyogre"),
    [SPECIES_PRIMAL_GROUDON] = _("Groudon"),
    [SPECIES_MEGA_RAYQUAZA] = _("Rayquaza"),
    [SPECIES_MEGA_LOPUNNY] = _("Lopunny"),
    [SPECIES_MEGA_GARCHOMP] = _("Garchomp"),
    [SPECIES_MEGA_LUCARIO] = _("Lucario"),
    [SPECIES_MEGA_ABOMASNOW] = _("Abomasnow"),
    [SPECIES_MEGA_GALLADE] = _("Gallade"),
    [SPECIES_MEGA_AUDINO] = _("Audino"),
    [SPECIES_MEGA_DIANCIE] = _("Diancie"),

    [SPECIES_ALOLAN_RATTATA] = _("Rattata"),
    [SPECIES_ALOLAN_RATICATE] = _("Raticate"),
    [SPECIES_ALOLAN_RAICHU] = _("Raichu"),
    [SPECIES_ALOLAN_SANDSHREW] = _("Sandshrew"),
    [SPECIES_ALOLAN_SANDSLASH] = _("Sandslash"),
    [SPECIES_ALOLAN_VULPIX] = _("Vulpix"),
    [SPECIES_ALOLAN_NINETALES] = _("Ninetales"),
    [SPECIES_ALOLAN_DIGLETT] = _("Diglett"),
    [SPECIES_ALOLAN_DUGTRIO] = _("Dugtrio"),
    [SPECIES_ALOLAN_MEOWTH] = _("Meowth"),
    [SPECIES_ALOLAN_PERSIAN] = _("Persian"),
    [SPECIES_ALOLAN_GEODUDE] = _("Geodude"),
    [SPECIES_ALOLAN_GRAVELER] = _("Graveler"),
    [SPECIES_ALOLAN_GOLEM] = _("Golem"),
    [SPECIES_ALOLAN_GRIMER] = _("Grimer"),
    [SPECIES_ALOLAN_MUK] = _("Muk"),
    [SPECIES_ALOLAN_EXEGGUTOR] = _("Exeggutor"),
    [SPECIES_ALOLAN_MAROWAK] = _("Marowak"),

    [SPECIES_SHAYMIN_SKY] = _("Shaymin"),
    [SPECIES_GIRATINA_ORIGIN] = _("Giratina"),
    [SPECIES_DARMANITAN_ZEN] = _("Darmanitan"),
    [SPECIES_TORNADUS_THERIAN] = _("Tornadus"),
    [SPECIES_THUNDURUS_THERIAN] = _("Thundurus"),
    [SPECIES_LANDORUS_THERIAN] = _("Landorus"),
    [SPECIES_MELOETTA_PIROUETTE] = _("Meloetta"),
    [SPECIES_AEGISLASH_BLADE] = _("Aegislash"),
    [SPECIES_HOOPA_UNBOUND] = _("Hoopa"),
    [SPECIES_MINIOR_CORE] = _("Minior"),
    [SPECIES_UNOWN_SCHOOL] = _("Unown"),
    [SPECIES_MIMIKYU_BUSTED] = _("Mimikyu"),
    [SPECIES_LYCANROC_MIDNIGHT] = _("Lycanroc"),
    [SPECIES_LYCANROC_DUSK] = _("Lycanroc"),
    [SPECIES_ZYGARDE_10] = _("Zygarde"),
    [SPECIES_ZYGARDE_COMPLETE] = _("Zygarde"),
    [SPECIES_DEOXYS_ATTACK] = _("Deoxys"),
    [SPECIES_DEOXYS_DEFENSE] = _("Deoxys"),
    [SPECIES_DEOXYS_SPEED] = _("Deoxys"),
};
